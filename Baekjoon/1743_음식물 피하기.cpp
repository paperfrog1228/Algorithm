#include <stdio.h>
#define MAX(a,b) a>b?a:b
int n,m,k,map[104][104],visit[104][104],cnt,ans=-1;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void DFS(int x,int y){
    visit[x][y]=1;
    cnt++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<=0||ny<=0||nx>n||ny>m)
            continue;
        if(visit[nx][ny]||map[nx][ny]==0)
            continue;  
        DFS(nx,ny);
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    int a,b;
    for(int i=1;i<=k;i++){
        scanf("%d %d",&a,&b);
        map[a][b]=1;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        cnt=0;
        if(visit[i][j]||map[i][j]==0)
            continue;
        DFS(i,j);
        ans=MAX(ans,cnt);
    }
    printf("%d",ans);
}