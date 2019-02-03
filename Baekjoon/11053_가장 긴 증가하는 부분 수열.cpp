#include<stdio.h>
int main(){

	int n,ans;
	int a[1001],dp[3][1001];//dp[1][i]:last num//dp[2][i]:num.length
	scanf("%d",&n);

	for(int i = 1; i<=n;i++)
		scanf("%d",&a[i]);

	ans=1;
	dp[1][1]=a[1];
	dp[2][1]=1;
	for(int i = 2; i<=n;i++){
		dp[1][i]=a[i];
		dp[2][i]=1;
		for(int j=1;j<i;j++){
			if(a[i]<=dp[1][j]){
				dp[1][i]=dp[1][i];
				dp[2][i]=dp[2][i];
				continue;}
			if(a[i]>dp[1][j]&&dp[2][i]<=dp[2][j]){
				dp[1][i]=a[i];
				dp[2][i]=dp[2][j]+1;
			}
		}
		if(ans<dp[2][i])
			ans=dp[2][i];
	}

	printf("%d\n",ans);
	return 0;
}

