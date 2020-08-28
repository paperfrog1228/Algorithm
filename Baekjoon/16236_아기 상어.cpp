#include <stdio.h>
#include <queue>
using namespace std;
struct Pos{int x;int y;};
queue<Pos> bfs_q;
Pos shark_pos,dir[4]={{0,1},{1,0},{-1,0},{0,-1}},min_pos;
int n,shark=2,map[22][22],visit[22][22],min_dist=999,ans,fish_cnt=0;
void Check(){
    Pos now=bfs_q.front();
    bfs_q.pop();
    int cnt=visit[now.x][now.y];
    for(int i=0;i<4;i++){
        int nx=now.x+dir[i].x,ny=now.y+dir[i].y;
        if(nx<1||ny<1||nx>n||ny>n)
            continue;
        if(visit[nx][ny]||map[nx][ny]>shark)
            continue;
        visit[nx][ny]=cnt+1;
        bfs_q.push({nx,ny});
        if(map[nx][ny]<shark&&map[nx][ny]!=0){
            if(visit[nx][ny]>min_dist)
                continue;
            if(visit[nx][ny]==min_dist){
                if(nx>min_pos.x)
                continue;
                if(nx==min_pos.x){
                    if(ny>min_pos.y)
                        continue;    
                }
            }
            min_dist=cnt+1;
            min_pos={nx,ny};
        }
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&map[i][j]);
        if(map[i][j]==9){
            min_pos={i,j};
            visit[i][j]=1;
        }
    }
    bfs_q.push(min_pos);
    map[min_pos.x][min_pos.y]=0;
    while(1){
        while(!bfs_q.empty())
        Check();
        if(min_dist==999)
            break;
        bfs_q.push(min_pos);
        bool end=true;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            visit[i][j]=0;
            if(map[i][j]<shark&&map[i][j]>0)
                end=false;
        }
        if(end) break;  
        visit[min_pos.x][min_pos.y]=1;
        map[min_pos.x][min_pos.y]=0;
        ans+=min_dist-1;
        min_pos={21,21},min_dist=999;
        fish_cnt++;
        if(fish_cnt==shark)
            shark++,fish_cnt=0;
    }
    printf("%d",ans);
}