#include<stdio.h>
#include<map>
using namespace std;
long long dp[500001][51],ans=0;
int main(){
	int n,temp,prime[500001];
	map<int,int> c;
	for(int i= 2; i<=500000;i++)
		prime[500001]=i;//50만까지 소수를 구해놓는게 옳은 일일까..
	for(int i= 2; i<=710;i++){
		if(prime[i]==0) continue;
	for(int j = i+i;j<=500000;j+=i)
		prime[j]=0;}
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{scanf("%d",&temp);
	c[temp]++;}
	
	dp[0][0]=1;
	
	long long max=0;
		for(int i=1;i<=n;i++){
				max+=c[i]*i;
		for(auto it = c.begin(); it != c.end(); it++){
		for(int count=1;count<=(it->second);count++)
			for(int money=0;money<=max;money++)
				{dp[money+(it->first*count)][i]+=dp[money][i-1];
					printf("max: %d  dp[%d][%d]:%lld  dp[%d][%d]:%lld  \n",max,money+it->first*count,i,dp[money+it->first*count][i],money,i-1,dp[money][i-1]);}}
		}
	for(int i=2;i<=500000;i++)
		if(prime[i]==0)
			ans+=dp[i][n];

	printf("%lld",ans);
	return 0;
}



