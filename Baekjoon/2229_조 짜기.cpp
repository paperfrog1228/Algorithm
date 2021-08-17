#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;
long long dp[1010][1010];
int n,a[1010];
long long go(int l,int r){
        long long& ret=dp[l][r];
        if(ret!=-1) return ret;
        if(l==r) return ret=0;
        if(l+1==r) return ret=max(a[l],a[r])-min(a[l],a[r]);
        for(int i=l;i<r;i++) 
        ret=max(ret,go(l,i)+go(i+1,r));
        return ret;
}
int main(){
        memset(dp,-1,sizeof(dp));
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        printf("%lld",go(1,n));
}