#include<stdio.h>
int n,m,a[505][505],d[505][505],x,y,cnt;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        d[i][j]=9999;
        a[i][j]=9999;
    }
    for(int i=1;i<=n;i++)
        a[i][i]=0;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    for(int k=1;k<=n;k++)
    if(d[i][k]>a[i][j]+a[j][k])
    d[i][k]=a[i][j]+a[j][k];
    for(int i=2;i<=n;i++)
    if(d[1][i]<=2)cnt++;
    printf("%d",cnt);
}