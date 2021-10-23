#include<stdio.h>
#include<algorithm>
#define ll long long
ll dp[1500010];
int n,t[1500010],p[1500010];
ll go(int i){
    if(i==n) return 0;
    ll &ret=dp[i];
    if(ret!=-1) return ret;
    ret=0;
    if(i+t[i]<=n) ret=std::max(go(i+1),go(i+t[i])+p[i]);
    else ret+=go(i+1);
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        dp[i]=-1,scanf("%d %d",&t[i],&p[i]);
    printf("%lld",go(0));
}