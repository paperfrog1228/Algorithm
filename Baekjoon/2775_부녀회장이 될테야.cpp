#include <stdio.h>
int t,k,n,a[15][15];
int main(){
    for(int i=0;i<=14;i++) a[0][i]=i;
    for(int i=1;i<=14;i++)
    for(int j=1;j<=14;j++)
    for(int k=1;k<=j;k++)
    a[i][j]+=a[i-1][k];
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d",&k,&n);
        printf("%d\n",a[k][n]);
        t--;
    }
}