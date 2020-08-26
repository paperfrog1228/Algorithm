#include <stdio.h>
int n,a,b,m,x,y;
long long dp[104][104];
int main(){
    scanf("%d %d %d %d",&n,&a,&b,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        dp[i][j]=987654321;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        dp[x][y]=1;
        dp[y][x]=1;
    }
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(dp[i][j]>dp[i][k]+dp[k][j])
        dp[i][j]=dp[i][k]+dp[k][j];
    }
    if(dp[a][b]==987654321)
        dp[a][b]=-1;
    printf("%lld",dp[a][b]);
}