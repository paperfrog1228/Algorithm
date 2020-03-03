#include<stdio.h>
int main(){
    int n,m;
    long long nemo[53][53],max=1;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%1lld",&nemo[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    for(int k=1;i+k<=n&&j+k<=m;k++)
    if(nemo[i][j]==nemo[i+k][j]
    &&nemo[i][j]==nemo[i][j+k]
    &&nemo[i][j]==nemo[i+k][j+k])
        if(max<=k)
        max=k+1;
    printf("%lld",max*max);
}