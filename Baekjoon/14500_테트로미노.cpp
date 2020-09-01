#include <stdio.h>
int n,m,map[505][505],v[505][505],ans;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void DFS(int x,int y,int dep,int cnt){
    if(v[x][y])
        return;
    v[x][y]++;
    cnt+=map[x][y];
    if(dep==3){
        if(ans<cnt)
        ans=cnt;
        v[x][y]=0;
        return;
    }
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<1||ny<1||nx>n||ny>m)
            continue;
        DFS(nx,ny,dep+1,cnt);
    }
    v[x][y]=0;
}
void Tcheck(int x,int y){
    int cnt=map[x][y],blank=0;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        cnt+=map[nx][ny];
        if(nx<1||ny<1||nx>n||ny>m)
        blank++;
    }
    if(blank>1)
    return;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        cnt-=map[nx][ny];
        if(ans<cnt)
        ans=cnt;
        cnt+=map[nx][ny];
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&map[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        DFS(i,j,0,0); 
        Tcheck(i,j);
    }
    printf("%d",ans);
}