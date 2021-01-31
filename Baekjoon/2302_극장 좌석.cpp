#include<stdio.h>
#include<algorithm>
int n,m,vip[42],a;
long long dp[42]={1,1,2},ans=1;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    for(int i=1;i<=m;i++) scanf("%d",&a),vip[a]++;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(vip[i]) ans*=dp[cnt],cnt=0;
        else cnt++;
    }
    ans*=dp[cnt];
    printf("%lld",ans);
}