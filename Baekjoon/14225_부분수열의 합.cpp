#include<stdio.h>
#define FOR(i,n) for(int i=1;i<=n;i++)
int n,arr[22],check[2000002];
void DFS(int i,int sum){
    if(arr[i]==0)
    return;
    sum+=arr[i];
    check[sum]=1;
    for(int j=i+1;j<=n;j++)
    DFS(j,sum);
}
int main(){
scanf("%d",&n);
FOR(i,n)
    scanf("%d",&arr[i]);
int a=0;
FOR(i, n)
    DFS(i,a);
FOR(i, 20000002)
if(check[i]==0){
    printf("%d\n",i);
    return 0;
}
}