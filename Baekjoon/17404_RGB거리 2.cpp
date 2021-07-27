#include<iostream>
#include<memory.h>
#include<algorithm>
int n,rgb[1010][3],last=-1,dp[1010][3],ans=987654321;
using namespace std;
int go(int now,int color){
    if(color==-1) color=2;
    if(color==3) color=0;
    int& ret=dp[now][color];
    if(now==1){
        if(color==last) return 10000001;
        return ret=rgb[1][color];
    }
    if(ret!=-1) return ret;
    return ret=rgb[now][color]+min(go(now-1,color+1),go(now-1,color-1));
}
void init(){memset(dp,-1,sizeof(dp));last++;}
int main(){
    init();
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=0;j<3;j++) scanf("%d",&rgb[i][j]);
    ans=min(ans,go(n,0));init();
    ans=min(ans,go(n,1));init();
    ans=min(ans,go(n,2));
    printf("%d",ans);
}