#include<stdio.h>
int main(){
int n,a[1001],dp[1001],min;
scanf("%d",&n);
for(int i = 1;i<=n;i++)
{
  scanf("%d",&a[i]);
  dp[i]=0;
}
dp[1]=1;
for(int i =2;i<=n;i++)
{
  min=9999;
  for(int j=1;j<i;j++)
  {
    if((j+a[j])<i)
    continue;
    if(min>dp[j]&&dp[j]!=0)
    min=dp[j];
  }
  if(min==9999)
  dp[i]=0;
  else 
  dp[i]=min+1;
}

if(dp[n]==0)
printf("-1");
else
printf("%d",dp[n]-1);
return 0;
}