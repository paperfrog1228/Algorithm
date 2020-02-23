#include<stdio.h>
#define mod 10007
int main(){
    int n,k;
    long long dp[1002][1002];
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n;j++){
            if(i==j)
            dp[i][j]=1;
            else if(j==1)
            dp[i][j]=i;
            else if(j==0)
            dp[i][j]=1;
            else
            dp[i][j]=dp[i-1][j-1]%mod+dp[i-1][j]%mod;
        }
    printf("%lld",dp[n][k]%mod);
}