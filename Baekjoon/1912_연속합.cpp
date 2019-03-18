#include<stdio.h>
long long max(long long a, long long b){
long long c;
	c=(a>b)?a:b;
return c;
}
int main(){
int n,a[100001];
long long ans=-1000,dp[100001];
scanf("%d",&n);
dp[0]=-1000;
for(int i = 1; i<=n;i++){
	scanf("%lld",&a[i]);
	dp[i]=max(dp[i-1]+a[i],a[i]);
	ans=max(ans,dp[i]);
}
printf("%lld",ans);
	return 0;
}
