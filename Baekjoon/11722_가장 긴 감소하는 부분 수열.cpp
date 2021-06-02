#include <stdio.h>
#include <algorithm>
#include <memory.h>
#include <vector>
int t,n,dp[1010],ans;
std::vector<int> s;
int go(int i){
    int &ret=dp[i];
    if(ret!=-1) return ret;
    ret=1;
    for(int j=i+1;j<n;j++)
        if(s[i]>s[j]) ret=std::max(go(j)+1,ret);
    return ret;
}
int main(){
     ans=0;
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    s.clear();
    s.resize(n);
    for(int i=0;i<n;i++) scanf("%d",&s[i]);
    for(int i=0;i<n;i++) ans=std::max(go(i),ans);
    printf("%d\n",ans);
}
