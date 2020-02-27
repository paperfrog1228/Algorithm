#include<stdio.h>
int arr[120][120],n;
long long dp[120][120]; 
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&arr[i][j]);
    dp[1][1]=1;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(arr[i][j]==0)
        continue;
        dp[i+arr[i][j]][j]+=dp[i][j];
        dp[i][j+arr[i][j]]+=dp[i][j];
    }
    printf("%lld",dp[n][n]);
}