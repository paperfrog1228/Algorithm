#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[501][501];
	long dp[501][501];
	for(int j =1; j<=n;j++){
	for(int i =1; i<=j;i++)
		scanf("%d",&a[i][j]);
	}
	dp[1][1]=a[1][1];
	for(int j =2; j<=n;j++){
	for(int i =1; i<=j;i++)
		if(i==1)
			dp[i][j]=a[i][j]+dp[i][j-1];
		else if(i==j)
			dp[i][j]=a[i][j]+dp[j-1][j-1];
		else
			dp[i][j]=a[i][j]+max(dp[i][j-1],dp[i-1][j-1]);
	}

	long Max=0;
	for(int i =1; i<=n;i++)
	{
		if(Max<dp[i][n])
			Max=dp[i][n];
	}
	printf("%ld",Max);
	return 0;
}

