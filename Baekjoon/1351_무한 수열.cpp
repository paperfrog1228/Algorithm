#include<stdio.h>
#include<map>
using namespace std;
map<long long,long long> dp;
long long n,p,q;
long long f(long long n){
	if(n==0) return 1;

	if(dp[n]!=0) return dp[n];
	if(dp[n]==0)
	return dp[n]=f(n/p)+f(n/q);   
}

int main(){
   scanf("%lld %lld %lld",&n,&p,&q);

   printf("%lld",f(n));
   return 0;
}




