#include<iostream>
#include<vector>
#include<algorithm>
int n,dp[1000006],be[1000006];
int main(){
    scanf("%d",&n);
    for(int i=0;i<=n;i++)dp[i]=-1;
    dp[1]=0;
    for (int i=2; i<=n; i++) {
		dp[i]=dp[i-1]+1;
		be[i]=i-1;
		if (i%2==0&&dp[i]>dp[i/2]+1)dp[i]=dp[i/2]+1,be[i]=i/2;
		if (i%3==0&&dp[i]>dp[i/3]+1)dp[i]=dp[i/3]+1,be[i]=i/3;
	}
    printf("%d\n",dp[n]);
    while(n!=1) printf("%d ",n),n=be[n];
    printf("1");
}
