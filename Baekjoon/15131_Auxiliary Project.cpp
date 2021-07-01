#include<stdio.h>
#include<algorithm>
#include<memory.h>
int n,dp[1234567]={0,0,1,7,4};
int go(int a){
    int &ret=dp[a];
    if(ret!=-1) return ret;
    for(int i=2;i<=4;i++)
        if(a-i>1) ret=std::max(ret,go(a-i)+go(i));
    return ret;
}
int main(){
	scanf("%d",&n);
    memset(dp,-1,sizeof(dp));
    dp[2]=1,dp[3]=7,dp[4]=4;
    printf("%d",go(n));
}