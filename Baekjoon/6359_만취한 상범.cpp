#include<stdio.h>
int t,n,ans;
int testcase(){
long dp[101]={}; //0=open, 1=close
scanf("%d",&n);
if(n==1) {printf("%d",n); return 0;}
for(int i =2 ; i <=n;i++)
for(int j =1 ; j <=n;j++)
	if(j%i==0)
	if(dp[j]==0) dp[j]=1;
	else dp[j]=0;
ans=0;

for(int i=1;i<=n;i++)
	if(dp[i]==0)
		ans++;
printf("%d\n",ans);
return 0;
}
int main(){
scanf("%d",&t);
for(int i=1;i<=t;i++)
	testcase();
return 0;
}
