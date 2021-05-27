#include<bits/stdc++.h>
#define mod 1000000003
using namespace std;
int n,k;
long long dp[1010][1010];
int main(){
    scanf("%d %d",&n,&k);
    if((n+1)/2<k){
        printf("0");
        return 0;
    }
    for(int i=0;i<=n;i++) dp[i][0]=1,dp[i][1]=i;
    dp[1][1]=1;
    for(int i=2;i<=n;i++)
    for(int j=1;j<=k;j++)
    dp[i][j]=(dp[i-2][j-1]+dp[i-1][j])%mod;
    printf("%lld",(dp[n-3][k-1]+dp[n-1][k])%mod);
}