#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
 
int main(void) {
	int input;
	
	scanf("%d",&input);
	long dp[1001];
	
	fill_n(dp, input, -1);
	dp[1]=1;
	dp[2]=2;

	for(int i = 3; i<=input; i++)
		dp[i]=(dp[i-1]+dp[i-2])%10007;	
	
	printf("%d",dp[input]);
	 
	return 0;
	}



