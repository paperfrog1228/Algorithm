#include<stdio.h>
int main()
{	
	int n;
	long dp[10][101];
	
	for(int i = 1 ; i<=9 ;i++)
		dp[i][1]=1;
	
		scanf("%d",&n);
	dp[0][1]=0;

	for(int j = 2 ; j<=n ;j++){
		dp[0][j]=dp[1][j-1];
		dp[9][j]=dp[8][j-1];
		for(int i= 1; i<=8; i++)
		dp[i][j]=(dp[i-1][j-1]+dp[i+1][j-1]) % 1000000000;

	}
	long sum=0;
	for(int i = 0 ; i<=9 ;i++)
	sum+=(dp[i][n]);
	printf("%ld",sum % 1000000000);
	return 0;
}
