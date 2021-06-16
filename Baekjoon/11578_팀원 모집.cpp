#include<bits/stdc++.h>
int n,m,f[20][20],goal=0,ans=987654321;
void dfs(int now,int cnt,int bit){
    for(int i=1;i<=f[now][0];i++) bit|=(1<<f[now][i]);
    if(goal==bit){
        ans=std::min(ans,cnt);
        return;
    }
    for(int i=now+1;i<=m;i++) dfs(i,cnt+1,bit);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) goal|=(1<<i);
    for(int i=1;i<=m;i++){
        scanf("%d",&f[i][0]);
        for(int j=1;j<=f[i][0];j++)
        scanf("%d",&f[i][j]);
    }
    for(int i=1;i<=m;i++) dfs(i,1,0);
    if(ans==987654321) printf("-1");
    else printf("%d",ans);
}
