#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int a[10001];
	scanf("%d",&n);
	for(int i = 1; i <=n; i++)
		scanf("%d",&a[i]);
	long dp[10001];
	/*
	 * AB_
	 * A_C
	 * _BC */
	dp[1]=a[1];
	dp[2]=a[1]+a[2];
	for(int i = 3;i<=n;i++){
		dp[i]=max(dp[i-2]+a[i],dp[i-3]+a[i-1]+a[i]);
		dp[i]=max(dp[i],dp[i-1]);
	}
	

	printf("%ld",dp[n]);
	return 0;
}

