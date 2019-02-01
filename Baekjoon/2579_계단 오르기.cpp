#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
	int n;	
	int a[301]={0,};
	long dp[301]={0,};

	scanf("%d",&n);

	for(int i = 1 ; i<=n ; i++){
	scanf("%d",&a[i]);
	}
	dp[1]=a[1];
	dp[2]=a[1]+a[2];

	for(int i=3;i<=n;i++){
	dp[i]=max(a[i-1]+dp[i-3],dp[i-2])+a[i];
	}

	printf("%ld",dp[n]);


}

