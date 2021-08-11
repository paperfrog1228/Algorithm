#include<stdio.h>
#define mod 1000000000
#define mx 1000000 
int n;
long long dp[mx+10]={0,1};
int main(){
    scanf("%d",&n);
    for(int i=2;i<=((n<0)?-1*n:n);i++) dp[i]=(dp[i-1]+dp[i-2])%mod;
    if(n==0){
        printf("0\n0");
        return 0;
    }
    printf("%d\n",(n<0&&n%2==0)?-1:1);
    printf("%lld",(n<0)?dp[n*-1]:dp[n]);
}