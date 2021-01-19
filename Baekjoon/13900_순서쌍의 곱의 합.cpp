#include<iostream>
int n,t;
long long arr[100004],sum[100004],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lld",&arr[i]),sum[i]=arr[i]+sum[i-1];
    for(int i=0;i<=n;i++)
    ans+=arr[i]*(sum[n]-sum[i]);
    printf("%lld",ans);
}