#include<stdio.h>
#include<algorithm>
int n,k,w[104],v[104];
long long dp[104][100004];
long long f(int x,int y){
    if(dp[x][y]>0) return dp[x][y];
    if(x>n) return 0;
    long long a=0;
    if(w[x]+y<=k)
        a=v[x]+f(x+1,y+w[x]);
    long long b=f(x+1,y);
    return dp[x][y]=std::max(a,b);
}
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&w[i],&v[i]);
    printf("%lld",f(1,0));
}