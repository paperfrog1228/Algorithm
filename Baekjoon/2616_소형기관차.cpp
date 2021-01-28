#include<stdio.h>
#include<algorithm>
int arr[50004],n,k;
long long dp[4][50004],sum[50004];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]),sum[i]=sum[i-1]+arr[i];
    scanf("%d",&k);
    for(int i=k;i<=n;i++) dp[1][i]=std::max(dp[1][i-1],sum[i]-sum[i-k]);
    for(int i=2*k;i<=n;i++) dp[2][i]=std::max(dp[2][i-1],dp[1][i-k]+sum[i]-sum[i-k]);
    for(int i=3*k;i<=n;i++) dp[3][i]=std::max(dp[3][i-1],dp[2][i-k]+sum[i]-sum[i-k]);
    printf("%lld",dp[3][n]);
}