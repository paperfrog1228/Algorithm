#include<stdio.h>
int main(){
int a[301][301];
long dp[301][301];
int n,m,t;
scanf("%d %d",&n,&m);
for(int i =1;i<=n;i++)
	for(int j=1;j<=m;j++)
		scanf("%d",&a[i][j]);
for(int i =1;i<=n;i++){
	dp[i][1]=dp[i-1][m]+a[i][1];
	for(int j=2;j<=m;j++)
	dp[i][j]=dp[i][j-1]+a[i][j];
}

scanf("%d",&t);
int i,j,x,y;
while(t>0){
	scanf("%d %d %d %d",&i,&j,&x,&y);
	long ans;
	if(j!=1)ans=dp[x][y]-dp[i][j-1];
	else ans=dp[x][y]-dp[i-1][m];
	for(int k=1;k<=j-1;k++)
		for(int l=i+1;l<=x;l++)
			ans-=a[l][k];
	for(int k=y+1;k<=m;k++)
		for(int l=i;l<=x-1;l++)
			ans-=a[l][k];
	printf("%ld\n",ans);
	t--;}
return 0;}
