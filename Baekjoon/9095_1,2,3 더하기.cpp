#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
 
int main(void) {
	int input;
	int dp[1000002];
	fill_n(dp, input, -1);
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	cin>>input;
	
	for(int i = 4; i<=input; i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0)
		dp[i]=min(dp[i],dp[i/2]+1);
		if(i%3==0)
		dp[i]=min(dp[i],dp[i/3]+1);		
	}
	
	printf("%d",dp[input]);
	  
	return 0;
	}


