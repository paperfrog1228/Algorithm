#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
long dp[1000001];
dp[1]=1;
dp[2]=2;
for(int i =3; i<=n;i++)
	dp[i]=(dp[i-1]%15746+dp[i-2]%15746)%15746;

printf("%ld",dp[n]);
return 0;
}
