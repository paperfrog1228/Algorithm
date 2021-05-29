#include<iostream>
int n;
long long dp[200]={0,1,1,1};
int main(){
    scanf("%d",&n);
    for(int i=4;i<=n;i++) dp[i]=dp[i-1]+dp[i-3];
    printf("%lld",dp[n]);
}