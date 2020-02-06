#include<stdio.h>
int main(){
    int n,x[102],y[102],ans=0;
    bool check[103][103];
    for(int i=1;i<=101;i++)
    for(int j=1;j<=101;j++)
        check[i][j]=false;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&x[i],&y[i]);
    for(int i=1;i<=n;i++){
    for(int j=x[i];j<x[i]+10;j++)
    for(int k=y[i];k<y[i]+10;k++)
        if(!check[j][k]){
            ans++;
            check[j][k]=true;
        }
    }
    printf("%d",ans);
} 