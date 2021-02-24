#include <iostream>
#define mod 1000000000
long long dp[5004][5004];
int n,k;
int main() {
    scanf("%d %d",&n,&k);
    for(int i=1;i<=k;i++) dp[0][i]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
            if(i==1) dp[i][j]=j;
            else
            dp[i][j]=dp[i-1][j]%mod+dp[i][j-1]%mod,dp[i][j]%=mod;
    printf("%lld",dp[n][k]);
    return 0;
}
