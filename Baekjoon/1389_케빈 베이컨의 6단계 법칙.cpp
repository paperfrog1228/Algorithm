#include<stdio.h>
#define MIN(a,b)(a<b?a:b)
int adj[105][105],dp[105][105],n,m;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        adj[i][j]=300;
    int a,b;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        adj[a][b]=1;
        adj[b][a]=1;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    for(int k=1;k<=n;k++){
        if(j==k)
        continue;
    adj[j][k]=MIN(adj[j][k],adj[j][i]+adj[i][k]);
    }
    int temp,min=350,mini;
    for(int i=n;i>=1;i--){
        temp=0;
        for(int j=1;j<=n;j++){
            if(i==j)
            continue;
            temp+=adj[i][j];
        }
        if(min>=temp){
            min=temp;
            mini=i;
        }
    }
    printf("%d",mini);
}