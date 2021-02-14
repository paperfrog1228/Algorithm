#include <iostream>
int n,k,sum[100004],max=-999999999;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    scanf("%d",&sum[i]),sum[i]+=sum[i-1];
    for(int i=0;i+k<=n;i++)
    if(sum[i+k]-sum[i]>max) max=sum[i+k]-sum[i];
    printf("%d",max);
}