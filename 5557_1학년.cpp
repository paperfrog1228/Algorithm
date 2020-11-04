#include<stdio.h>
int n,a[104];
long long dp[104][22];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    dp[1][a[1]]=1;
    for(int i=2;i<n;i++)
    for(int j=0;j<=20;j++){
        if(dp[i-1][j]){
            if(j+a[i]<=20) dp[i][j+a[i]]+=dp[i-1][j];
            if(j-a[i]>=0) dp[i][j-a[i]]+=dp[i-1][j];
        }
    }
    printf("%lld",dp[n-1][a[n]]);
}