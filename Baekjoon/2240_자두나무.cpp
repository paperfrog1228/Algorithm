#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int t,w,jadu[1004],dp[2][31][1004];
long long f(int pos,int time,int move){
    if(move>w||time>t) return 0;
    if(pos%2==0) pos=0; else pos=1;
    if(dp[pos][move][time]!=-1) return dp[pos][move][time];
    if(jadu[time]==pos+1) dp[pos][move][time]=1;
    else dp[pos][move][time]=0;
    dp[pos][move][time]+=max(f(pos,time+1,move),f(pos+1,time+1,move+1));
    return dp[pos][move][time];
}
int main(){
    scanf("%d %d",&t,&w);
    for(int i=1;i<=t;i++) scanf("%d",&jadu[i]);
    memset(dp,-1,sizeof(dp));
    printf("%lld",f(0,0,0));
}
