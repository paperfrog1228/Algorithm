#include<stdio.h>
#include<map>
#include<vector>
using namespace std;
long long dp[500001],ans=0,zero=1;
int main(){
	int n,temp;
	bool prime[500001];
	map<int,int> c;
	for(int i= 2; i<=500000;i++)
		prime[i]=i;//50만까지 소수를 구해놓는게 옳은 일일까..
	for(int i= 2; i<=710;i++){
		if(prime[i]==0) continue;
	for(int j = i+i;j<=500000;j+=i)
		prime[j]=0;}
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{scanf("%d",&temp);
		if(temp==0)
		{zero++;
			continue;}
	c[temp]++;}
	dp[0]=1;
	long long max=0;
		for(auto it = c.begin(); it != c.end(); it++){
				max+=it->first*it->second;
					for(int money=max;money>=0;money--){
						for(int count=1;count<=it->second;count++){
							if(money+(it->first)*count>500000)
								continue;
						dp[money+(it->first)*count]+=dp[money];
						}
		}	
		}
		for(int i=2;i<=max;i++)
		if(prime[i]!=0)
			ans+=dp[i];
			
	printf("%lld",ans*zero);
	return 0;
}



