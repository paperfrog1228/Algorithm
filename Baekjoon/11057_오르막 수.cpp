#include<stdio.h>
int main()
{
	int n;
	long dp[11][1001];
	scanf("%d",&n);

	for(int i = 0; i<=9;i++)
		dp[i][1]=1;

	for(int i = 2; i<=n;i++)
		for(int j=0; j<=9;j++)
			for(int k = j;k<=9;k++)
			dp[j][i]+=(dp[k][i-1]%10007);
	long sum=0;
	for(int i =0;i<=9;i++){
		sum+=dp[i][n];
		sum%=10007;}

	printf("%ld",sum);
	return 0;
}

