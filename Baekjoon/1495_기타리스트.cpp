#include <stdio.h>
#include <algorithm>
#include <memory.h>
int n,s,m,v[110],dp[1010][110];
int go(int now,int cnt){
    if(now<0||now>m) return -2;
    int& ret=dp[now][cnt];
    if(ret!=-1) return ret;
    if(cnt==n+1) return ret=now;
    return ret=std::max(go(now+v[cnt],cnt+1),go(now-v[cnt],cnt+1));
}
int main(){
    memset(dp,-1,sizeof(dp));
    scanf("%d %d %d",&n,&s,&m); 
    for(int i=1;i<=n;i++) scanf("%d",&v[i]);
    go(s,1);
    if(dp[s][1]==-2) printf("-1");
    else
    printf("%d",dp[s][1]);
}
