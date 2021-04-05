#include<iostream>
#define INF 5000
int n,k,a,b,q,dp[404][404];
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++) dp[i][j]=INF;
    for(int i=1;i<=k;i++) scanf("%d %d",&a,&b),dp[a][b]=1;
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(dp[i][j]>dp[i][k]+dp[k][j]) dp[i][j]=dp[i][k]+dp[k][j];
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d %d",&a,&b);
        if(dp[a][b]>=INF&&dp[b][a]>=INF)
            printf("0\n");
        else if(dp[a][b]>0&&dp[a][b]<INF) printf("-1\n");
        else if(dp[b][a]>0&&dp[b][a]<INF) printf("1\n");
    }
}
