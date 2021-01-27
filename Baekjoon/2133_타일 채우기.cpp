#include<stdio.h>
long long dp[33]={1,0,3};
int n;
int main(){
    scanf("%d",&n);
    for(int i=4;i<=n;i++){
        dp[i]=dp[i-2]*3;
        for(int j=4;j<=i;j+=2)
        dp[i]+=dp[i-j]*2;
    }
    printf("%lld",dp[n]);
}