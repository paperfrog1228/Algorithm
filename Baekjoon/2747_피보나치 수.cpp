#include <stdio.h>
int n;
long long dp[50];
int main() {
    dp[0]=0;
    dp[1]=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    printf("%lld",dp[n]);
}