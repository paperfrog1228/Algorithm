#include<stdio.h>
int main(){
long long koong[68];
koong[0]=1;
koong[1]=1;
koong[2]=2;
koong[3]=4;
for(int i=4;i<=67;i++)
koong[i]=koong[i-1]+koong[i-2]+koong[i-3]+koong[i-4];
int t,n;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
scanf("%d",&n);
printf("%lld\n",koong[n]);
}
return 0;}

