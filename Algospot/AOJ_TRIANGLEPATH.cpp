#include <stdio.h>
#include <algorithm>
#include <memory.h>
int t,n,tr[110][110],dp[110][110],ans;
int go(int r,int c){
    if(r==n){return tr[r][c];}
    int& ret=dp[r][c];
    if(ret!=-1) return ret;
    return ret=std::max(go(r+1,c),go(r+1,c+1))+tr[r][c];
}
void sol(){
    ans=0;
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=i;j++) scanf("%d",&tr[i][j]);//i:row,j:col
    printf("%d\n",go(1,1));
}
int main(){
    scanf("%d",&t);
    while(t--) sol();
}