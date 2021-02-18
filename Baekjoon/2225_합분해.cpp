#include<iostream>
#define mod 1000000000
int n,k;
long long dp[204][204];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=0;i<=n;i++) dp[i][1]=1;
    for(int i=0;i<=n;i++)
    for(int j=1;j<=k;j++)
    for(int l=0;l<=i;l++)
    dp[i][j]+=dp[i-l][j-1],dp[i][j]%=mod;
    printf("%lld",dp[n][k]);
}
