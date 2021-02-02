#include<stdio.h>
int n;
long long dp[100]={0,1};
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    printf("%lld",dp[n]);
}