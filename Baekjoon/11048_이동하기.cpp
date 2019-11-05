#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
int n,m,a[1001][1001],dp[1001][1001];
scanf("%d %d",&n,&m);
for(int i =1;i<=n;i++)
  for(int j= 1; j<=m;j++)
    scanf("%d",&a[i][j]);
for(int i =1;i<=m;i++)
dp[1][i]=a[1][i]+dp[1][i-1];
for(int i =2;i<=n;i++)
  for(int j= 1; j<=m;j++)
  dp[i][j]=a[i][j]+max(dp[i-1][j],dp[i][j-1]);
printf("%d",dp[n][m]);
}
