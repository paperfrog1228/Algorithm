#include<stdio.h>
int n,m,mp[33][33],ans[33][33],vis[33][33],cnt;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void dfs(int x,int y,int before,int after){
    if(x<1||y<1||x>n||y>m) return;
    if(mp[x][y]!=before||vis[x][y]) return;
    vis[x][y]++;
    mp[x][y]=after;
    for(int i=0;i<4;i++)
    dfs(x+dx[i],y+dy[i],before,after);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&mp[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&ans[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    if(mp[i][j]!=ans[i][j]){
        if(cnt){
            printf("NO");
            return 0;
        }
        dfs(i,j,mp[i][j],ans[i][j]);
        cnt++;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    if(mp[i][j]!=ans[i][j]){
        printf("NO");
        return 0;
    }
    printf("YES");
}