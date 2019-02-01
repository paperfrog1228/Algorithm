#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
int main(void) {
	int n=0;
	long long dp[91];
	long long sum[91];
	
	dp[1]=1;
	dp[2]=1;
	sum[1]=1;
	sum[2]=2;
	
	scanf("%d",&n);
	
	for(int i = 3; i<=n; i++){
		dp[i]=sum[i-2]+1;
		sum[i]=sum[i-1]+dp[i];
	}

	cout <<dp[n]<<endl;
	  
	return 0;
	}




