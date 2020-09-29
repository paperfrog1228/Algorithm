#include<stdio.h>
#include<queue>
struct pos{int x;int y;int c;};
std::queue<pos>q;
int w,h,k,map[204][204],v[204][204][32],ans=0;
pos d[4]={{1,0},{0,1},{-1,0},{0,-1}};
pos dh[8]={{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
void BFS(){
    while(!q.empty()){
        pos cur=q.front();
        if(cur.x==h&&cur.y==w){
            ans=v[cur.x][cur.y][cur.c];
            return;
        }
        q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.x+d[i].x,ny=cur.y+d[i].y;
            if(nx<1||ny<1||nx>h||ny>w||v[nx][ny][cur.c]||map[nx][ny]==1)continue;
            v[nx][ny][cur.c]=v[cur.x][cur.y][cur.c]+1;
            q.push({nx,ny,cur.c});
        }
        if(cur.c==0) continue;
        for(int i=0;i<8;i++){
            int nx=cur.x+dh[i].x,ny=cur.y+dh[i].y;
            if(nx<1||ny<1||nx>h||ny>w||v[nx][ny][cur.c-1]||map[nx][ny]==1)continue;
            v[nx][ny][cur.c-1]=v[cur.x][cur.y][cur.c]+1;
            q.push({nx,ny,cur.c-1});
        }
    }
}
int main(){
    scanf("%d %d %d",&k,&w,&h);
    for(int i=1;i<=h;i++)
    for(int j=1;j<=w;j++)
    scanf("%d",&map[i][j]);
    v[1][1][k]=1;
    q.push({1,1,k});
    BFS();
    printf("%d",ans-1);
}