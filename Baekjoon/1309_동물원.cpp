#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
long dp[3][100001];//dp[0]:��ġx, dp[1]:���� ,dp[2]:������
dp[0][1]=1;
dp[1][1]=1;
dp[2][1]=1;
for(int i=2;i<=n;i++){
dp[0][i]=dp[0][i-1]%9901+dp[1][i-1]%9901+dp[2][i-1]%9901;
dp[1][i]=dp[0][i-1]%9901+dp[2][i-1]%9901;
dp[2][i]=dp[0][i-1]%9901+dp[1][i-1]%9901;
}
printf("%ld",(dp[0][n]+dp[1][n]+dp[2][n])%9901);
return 0;
}
