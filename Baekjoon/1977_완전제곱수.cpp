#include<stdio.h>
int n,m,arr[150],min;
long long sum=0;
int main(){
    for(int i=0;i<=100;i++)
        arr[i]=i*i;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=100;i++)
        if(n<=arr[i]&&arr[i]<=m){
            if(sum==0)
            min=arr[i];
            sum+=arr[i];
        }
   if(sum==0){
       printf("%lld",sum-1);
    return 0;
   }
   printf("%lld\n",sum);
   printf("%d",min);
}