#include<bits/stdc++.h>
using namespace std;
int n,dp[510][510],a[510][2];
int go(int l,int r){
    int &ret=dp[l][r];
    if(ret!=-1) return ret;
    if(l==r) return ret=0;
    if(l+1==r)
        return ret=a[l][0]*a[l][1]*a[r][1];
    for(int i=l+1;i<=r;i++)
    if(ret==-1) ret=go(l,i-1)+go(i,r)+a[l][0]*a[i][0]*a[r][1];
    else ret=min(ret,go(l,i-1)+go(i,r)+a[l][0]*a[i][0]*a[r][1]);
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d %d",&a[i][0],&a[i][1]);
    memset(dp,-1,sizeof(dp));
    printf("%d",go(1,n));
}