#include <stdio.h>
#include <queue>
using namespace std;
struct Pos{int x;int y;unsigned int bit;};
Pos item[6],dir[4]={{0,1},{1,0},{0,-1},{-1,0}};
int n,m,visit[55][55][64],ans=99999,item_cnt=0;
char map[55][55];
queue<Pos> q;
void BFS(){
    while(!q.empty()){
        Pos now=q.front();
        q.pop();
        int cnt=visit[now.x][now.y][now.bit];
        if(map[now.x][now.y]=='E'&&cnt<ans&&now.bit==(1<<item_cnt)-1)
            ans=cnt;
        for(int i=0;i<4;i++){
            int nx=now.x+dir[i].x;
            int ny=now.y+dir[i].y;
            unsigned int nbit=now.bit;
            if(nx<0||ny<0||nx>=m||ny>=n||map[nx][ny]=='#'||visit[nx][ny][nbit])
                continue;
            if(map[nx][ny]=='X')
                for(int j=0;j<item_cnt;j++){
                    if(item[j].x==nx&&item[j].y==ny){
                        nbit|=(1<<j);
                        break;
                    }
                }
            visit[nx][ny][nbit]=cnt+1;
            q.push({nx,ny,nbit});
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf(" %1c",&map[i][j]);
        if(map[i][j]=='S')
            q.push({i,j,0});
        if(map[i][j]=='X'){
            item[item_cnt]={i,j};
            item_cnt++;
        }
    }
    BFS();
    printf("%d",ans);
}