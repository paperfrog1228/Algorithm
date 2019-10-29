#include <stdio.h>
int dp[100002]={};
int max=0;
int halestone(int a){
   if(max<a)
      max=a;
  if(a==1)
  return max;
  if(a<100000)
  if(dp[a]!=0)
  {
    if(dp[a]>max)
  return dp[a];
  else return max;
  }
  if(a%2==0)
   a=a/2;
  else
   a=a*3+1;
   return halestone(a);
}
int main() {
  int n,t=0;
  dp[1]=1;
  scanf("%d",&t);
  for(int i = 1; i <=t; ++i)
  {
    scanf("%d",&n);
    max=n;
    dp[n]=halestone(n);
    printf("%d\n\n",dp[n]);
  }

}
