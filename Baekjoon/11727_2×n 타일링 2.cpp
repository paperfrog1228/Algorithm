#include<stdio.h>
int main(){
	int n=0;
	long dp[1001];
	scanf("%d",&n);
	dp[1]=1;
	dp[2]=3;
	for(int i=3;i<=n;i++){
	dp[i]=dp[i-1]%10007+(dp[i-2]*2)%10007;
	}
	printf("%ld",dp[n]%10007);
	return 0;
}

