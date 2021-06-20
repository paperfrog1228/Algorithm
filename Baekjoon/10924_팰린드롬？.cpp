#include<bits/stdc++.h>
using namespace std;
int n,m,seq[2020],dp[2020][2020],a,b;
int go(int s,int e){
    if(s>e) return -1; 
    int& ret=dp[s][e];
    if(ret!=-1) return ret;
    if(s==e) return 1;
    int a=go(s+1,e-1);
    if(seq[s]==seq[e]) a&=1;
    else a=0;
    return dp[s][e]=a;
}
int main(){
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&seq[i]);
    scanf("%d",&m);
    while(m--){
        scanf("%d %d",&a,&b);
        printf("%d\n",go(a,b));
    }
}
