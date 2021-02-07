#include<iostream>
#include <string.h>
#define mod 1000000
int n;
long long dp[1004][4][4];
long long func(int day,int l,int a){
    if(l>=2) return dp[day][l][a]=0;
    if(a>=3) return dp[day][l][a]=0;
    if(day==n) return dp[day][l][a]=1;
    if(dp[day][l][a]!=-1)
        return dp[day][l][a];
    return dp[day][l][a]=(func(day+1,l,0)+
    func(day+1,l+1,0)+func(day+1,l,a+1))%mod; 
}
int main(){
    scanf("%d",&n);
    memset(dp, -1, sizeof(dp));
    printf("%lld",func(0,0,0));
}
