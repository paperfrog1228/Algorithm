#include<stdio.h>
int main(void)
{
  int n,t,a;
  long long dp[100001]={0};
  scanf("%d %d",&n,&t);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a);
    dp[i]=dp[i-1]+a;
  }
  for(int i=1;i<=t;i++)
  {
    scanf("%d %d",&n,&a);
    printf("%lld\n",dp[a]-dp[n-1]);
  }
}
