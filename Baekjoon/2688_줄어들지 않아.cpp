#include<stdio.h>
int main(){
int t,n;
long long dp[65][10]={0,},ans;
for(int i=0;i<=9;i++)
	dp[1][i]=1;

for(int i=2;i<=64;i++)
for(int j=0;j<=9;j++)
for(int k=j;k<=9;k++)
	dp[i][j]+=dp[i-1][k];
scanf("%d",&t);


for(int i =1;i<=t;i++)
{
	ans=0;
scanf("%d",&n);
for(int j=0;j<=9;j++)
	ans+=dp[n][j];
printf("%lld\n",ans);
}
return 0;
}
