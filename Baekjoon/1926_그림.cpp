#include<stdio.h>
int n,m,map[505][505],visit[505][505],cnt,max,dep,dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
void DFS(int x,int y){
    visit[x][y]++;
    dep++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<=0||ny<=0||nx>n||ny>m)
            continue;
        if(visit[nx][ny]||map[nx][ny]==0)
            continue;
        DFS(nx,ny);
    }
   
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&map[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        if(visit[i][j]||map[i][j]==0)
        continue;
        dep=0;
        DFS(i,j);
        cnt++;
        if(dep>max)
        max=dep; 
    }
    printf("%d\n%d",cnt,max);
}