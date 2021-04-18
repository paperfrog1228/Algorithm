#include <bits/stdc++.h>
int n,k;
long long dp[33][33];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=i;j++){
        if(j==1) dp[i][j]=1;
        else dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
    }
    printf("%lld",dp[n][k]);
}
