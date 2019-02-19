#include<stdio.h>
int n,m;
long dp[31][31];
void testcase(){
	scanf("%d %d",&n,&m);
	printf("%ld\n",dp[n][m]);
}
int main(){
	for(int j=1;j<=30;j++){
		dp[1][j]=j;
		for(int i=2;i<=j;i++)
			for(int k=j-1;k>=i-1;k--)
			dp[i][j]+=dp[i-1][k];
	}
	int t;
	scanf("%d",&t);
	for(int i = 1; i<=t;i++)
		testcase();
	return 0;
}
