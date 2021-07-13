#include<bits/stdc++.h>
int n,m,ans=1;
char s[1010][1010];
int vis[1010][1010];
int dfs(int x,int y){
    if(vis[x][y]) return vis[x][y];
    vis[x][y]=ans;
    if(s[x][y]=='U') vis[x][y]=dfs(x-1,y);
    else if(s[x][y]=='D') vis[x][y]=dfs(x+1,y);
    else if(s[x][y]=='L') vis[x][y]=dfs(x,y-1);
    else if(s[x][y]=='R') vis[x][y]=dfs(x,y+1);
    return vis[x][y];
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        int cnt=dfs(i,j);
        if(cnt==ans) ans++;
    }
    printf("%d",ans-1);
}