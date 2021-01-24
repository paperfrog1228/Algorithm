#include <iostream>
#include <vector>
std::vector<int> v[104];
#define INF 2147483649
int d,n;
long long dp[105],mmax,t[105],p[105];
int main() {
    scanf("%d %d",&d,&n);
    for(int i=1;i<=n+1;i++) scanf("%d",&p[i]),mmax+=p[i],dp[i]=INF;
    for(int i=1;i<=n;i++) scanf("%d",&t[i]);
    if(mmax<=d) {printf("0\n0"); return 0;}
    for(int i=1;i<=n+1;i++){
        long long dis=p[i],ii=0;
        for(int j=i-1;j>=0;j--){
            if(dis>d) break;
            if(dp[j]+t[i]<=dp[i]) dp[i]=dp[j]+t[i],ii=j;
            dis+=p[j];
        }
        v[i]=v[ii];
        v[i].push_back(i);
    }
    printf("%lld\n%d\n",dp[n+1],v[n+1].size()-1);
    for(int i=0;i<v[n+1].size()-1;i++)
    printf("%d ",v[n+1][i]);
    return 0;
}