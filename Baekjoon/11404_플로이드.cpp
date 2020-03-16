#include<stdio.h>
int n,m,arr[103][103],a,b,c;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        arr[i][j]=10000005;
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(c<arr[a][b])
        arr[a][b]=c;
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    for(int k=1;k<=n;k++){
        if(j==k)
        continue;
        if(arr[j][k]>arr[j][i]+arr[i][k])
            arr[j][k]=arr[j][i]+arr[i][k];
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(arr[i][j]>=10000005)
        arr[i][j]=0;
        if(j==n)
        printf("%d\n",arr[i][j]);
        else
        printf("%d ",arr[i][j]);
    }
}