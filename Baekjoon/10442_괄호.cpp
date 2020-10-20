#include <stdio.h>
#define mod 1000000007
long long int dp[2505];
int t,l;
int main(){
    dp[0]=dp[1]=1;
    for(int i=2;i<=2500;i++)
    for(int j=0;j<i;j++)
    dp[i]+=(dp[j]*dp[i-j-1])%mod,dp[i]%=mod;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&l);
        if(l%2==1)
        printf("0\n");
        else
        printf("%lld\n",dp[l/2]);
        t--;
    }
}