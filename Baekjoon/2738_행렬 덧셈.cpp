#include<stdio.h>
int n,m,a[102][102],b[102][102];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&b[i][j]);
    for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
    printf("%d ",a[i][j]+b[i][j]);
    printf("\n");
    }
}