#include<iostream>
long long n,m,sum[1000004],cnt[1004],ans;
int main(){
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%lld",&sum[i]),sum[i]+=sum[i-1],sum[i]%=m,cnt[sum[i]]++;
    ans=cnt[0];
    for(int i=0;i<=m;i++)
    ans+=cnt[i]*(cnt[i]-1)/2;
    printf("%lld",ans);
}