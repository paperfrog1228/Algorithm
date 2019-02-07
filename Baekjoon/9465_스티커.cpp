#include<stdio.h>
int n,a[3][100001],dp[3][100001];
int max(int a,int b)
{ if(a>b) return a;
	else return b;}
void testcase(){
       scanf("%d",&n);
   for(int i=1;i<=n;i++)
      scanf("%d",&a[1][i]);
   for(int i=1;i<=n;i++)
      scanf("%d",&a[2][i]);

   dp[1][1]=a[1][1];
   dp[2][1]=a[2][1];
   dp[1][2]=dp[2][1]+a[1][2];
   dp[2][2]=dp[1][1]+a[2][2];

   for(int i=3;i<=n;i++){
      dp[1][i]=max(dp[2][i-2],dp[2][i-1])+a[1][i];
      dp[2][i]=max(dp[1][i-2],dp[1][i-1])+a[2][i];
   }
   printf("%d\n",max(dp[1][n],dp[2][n]));
}
int main(){
      int t;
   scanf("%d",&t);

   for(int i = 1 ; i<=t;i++)
   { 
	testcase();
   }
 
   return 0;
}


