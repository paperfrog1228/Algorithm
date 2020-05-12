#include<stdio.h>
#define INF 5000001
int v,e,dp[404][404],a,b,c,min=INF;
int main(){
    scanf("%d %d",&v,&e); 
    for(int i=1;i<=v;i++)
    for(int j=1;j<=v;j++){
        dp[i][j]=INF;
    }
    for(int i=1;i<=e;i++){
        scanf("%d %d %d",&a,&b,&c);
        dp[a][b]=c;
    }
    for(int i=1;i<=v;i++)
    for(int j=1;j<=v;j++)
    for(int k=1;k<=v;k++){
        if(dp[i][k]>dp[i][j]+dp[j][k])
            dp[i][k]=dp[i][j]+dp[j][k];
    } 
    for(int i=1;i<=v;i++)
        if(dp[i][i]<min)
            min=dp[i][i];
    if(min==INF)
    printf("-1");
    else        
    printf("%d",min);
}