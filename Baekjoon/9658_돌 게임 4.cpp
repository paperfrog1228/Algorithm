#include<stdio.h>
int main(){
    int n,dp[1003];
    dp[1]=0;dp[2]=1;dp[3]=0;dp[4]=1;
    scanf("%d",&n);
    for(int i=5;i<=n;i++){
        if(dp[i-1]&&dp[i-3]&&dp[i-4])
        dp[i]=0;
        else dp[i]=1;
    }
    dp[n]?printf("SK"):printf("CY");
}