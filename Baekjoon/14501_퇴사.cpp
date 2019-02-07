#include<stdio.h>
int main(){
int n;
int a[3][16];//a[1][i]: Today , a[2][i]: Pay
int dp[16],ans=0;
scanf("%d",&n);
for(int i = 1;i<=n;i++)
	scanf("%d %d",&a[1][i],&a[2][i]);
for(int i = 1;i<=n;i++){
	if(i+a[1][i]-1<=n) dp[i]=a[2][i];
	else dp[i]=0;	
	for(int j =1;j<i;j++)
		if(i-j-a[1][j]>=0&&dp[i]<dp[j]+a[2][i])
			if(i+a[1][i]-1<=n) dp[i]=dp[j]+a[2][i];
			else dp[i]=dp[j];
	if(ans<dp[i])ans=dp[i];
}
printf("%d\n",ans);
	return 0;
}
