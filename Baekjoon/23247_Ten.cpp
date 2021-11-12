#include<stdio.h>
int n,m,map[310][310],sum[310][310],ten;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&map[i][j]),sum[i][j]=map[i][j]+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
    for(int i=1;i<=n;i++) 
    for(int j=1;j<=m;j++)
    for(int k=i;k<=n;k++) 
    for(int l=j;l<=m;l++){
        int tmp=sum[k][l]-sum[i-1][l]-sum[k][j-1]+sum[i-1][j-1];
        if(tmp==10) ten++;
        else if(tmp>10) break;
    }
    printf("%d",ten);
}