#include<stdio.h>
int main(){
int n,a[1001],dp[1001];
long max=0,ans=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%d",&a[i]);
dp[i]=0;
}
for(int i=1;i<=n;i++)
{
  max=0;
  for(int j=1;j<i;j++)
  {
    if(a[i]<=a[j]) continue;
    if(dp[j]>max)
    max=dp[j];
  }
  dp[i]=a[i]+max;
  if(dp[i]>ans)
  ans=dp[i];
}
  printf("%ld",ans);
return 0;
}