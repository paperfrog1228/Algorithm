#include<stdio.h>
#include<algorithm>
#include<memory>
using namespace std;
int n,a[4];
long long dp[70][70][70];
long long go(int a,int b,int c){
    if(a<0) a=0;
    if(b<0) b=0;
    if(c<0) c=0;
    if(a<=0&&b<=0&&c<=0) return 0;
    long long &ret=dp[a][b][c];
    if(ret!=-1) return ret;
    ret=go(a-9,b-3,c-1);
    ret=min(ret,go(a-9,b-1,c-3));
    ret=min(ret,go(a-3,b-9,c-1));
    ret=min(ret,go(a-3,b-1,c-9));
    ret=min(ret,go(a-1,b-3,c-9));
    ret=min(ret,go(a-1,b-9,c-3));
    return ++ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    memset(dp,-1,sizeof(dp));
    printf("%lld",go(a[1],a[2],a[3]));
}