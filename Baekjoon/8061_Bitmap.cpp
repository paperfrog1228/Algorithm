#include<iostream>
#include<queue>
using namespace std;
struct pos{int x;int y;};
queue<pos> q;
int n,m,nx,ny;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char map[200][200];
int ans[200][200];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf(" %1c",&map[i][j]);
        if(map[i][j]=='1') q.push({i,j}),ans[i][j]=0;
    }
    while(!q.empty()){
        pos now=q.front();q.pop();
        for(int i=0;i<4;i++){
            nx=now.x+dx[i];
            ny=now.y+dy[i];
            if(nx<=0||ny<=0||nx>n||ny>m||ans[nx][ny]||map[nx][ny]=='1') continue;
            q.push({nx,ny});
            ans[nx][ny]=ans[now.x][now.y]+1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
}
