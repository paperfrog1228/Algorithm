#include<stdio.h>
int main(){
    int n,dp[1003];
    dp[1]=1;dp[2]=0;dp[3]=1;dp[4]=1;
    scanf("%d",&n);
    for(int i=5;i<=n;i++){
        if(!dp[i-1]||!dp[i-3]||!dp[i-4])
        dp[i]=1;
        else dp[i]=0;
    }
    dp[n]?printf("SK"):printf("CY");
}