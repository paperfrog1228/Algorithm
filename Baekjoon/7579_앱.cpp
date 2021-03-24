#include<stdio.h>
#include<string.h>
#include<algorithm>
int n,m,a[110],c[110];
long long dp[110][10010],ans;
long long go(int i,int cost){
    if(dp[i][cost]!=-1) return dp[i][cost];
    if(i>n) return 0;
    dp[i][cost]=go(i+1,cost);
    if(c[i]<=cost)
    dp[i][cost]=std::max(dp[i][cost],a[i]+go(i+1,cost-c[i]));
    return dp[i][cost];
}
int main(){
    memset(dp,-1,sizeof(dp));
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) scanf("%d",&c[i]);
    int cost=0;
    while(1){
        if(go(0,cost)>=m){
            printf("%d",cost);
            return 0;
        }
        cost++;
    }
}
