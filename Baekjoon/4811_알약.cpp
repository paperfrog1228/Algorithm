#include<stdio.h>
#include<memory.h>
#define ll unsigned long long
int n;
ll dp[65][65];
ll go(int w,int h){
    ll& ret=dp[w][h];
    if(ret!=-1) return ret;
    ll a=0,b=0;
    if(w==0&&h==0) return ret=1;
    if(w>0) a=go(w-1,h+1);
    if(h>0) b=go(w,h-1);
    return ret=a+b;
}
int main(){
    memset(dp,-1,sizeof(dp));
    go(30,0);
    while(scanf("%d",&n)&&n!=0) 
        printf("%lld\n",dp[n][0]);
}