#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){

	int n;
	int p[1001];
	int dp[1001];
		scanf("%d",&n);
	for(int i = 1; i <=n;i++)
		scanf("%d",&p[i]);

	dp[1]=p[1];
	for(int i = 2; i <= n; i++){
		dp[i]=p[i];
		for(int j = 1; j<=i;j++)
		dp[i]=max(dp[i],dp[i-j]+dp[j]);
	}

	printf("%d",dp[n]);
	return 0;
}
