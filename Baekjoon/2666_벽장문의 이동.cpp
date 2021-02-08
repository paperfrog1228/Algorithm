#include<iostream>
#include<math.h>
#include<algorithm>
#include <string.h>
int n,door[22],a,b,d;
long long dp[22][22][22];
long long func(int o1,int o2,int go){
    if(go>d) return 0;
    if(dp[o1][o2][go]!=-1) return dp[o1][o2][go];
    int dd=door[go];
    dp[o1][o2][go]=std::min(abs(o1-dd)+func(dd,o2,go+1),abs(o2-dd)+func(o1,dd,go+1));
    return dp[o1][o2][go];
}
int main(){
    scanf("%d %d %d %d",&n,&a,&b,&d);
    for(int i=1;i<=d;i++) scanf("%d",&door[i]);
    memset(dp, -1, sizeof(dp));
    printf("%lld",func(a,b,1)); 
}