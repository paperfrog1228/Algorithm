#include<stdio.h>
long long int a,b,max,min;
int main(){
    scanf("%lld %lld",&a,&b);
    a>b?(max=a,min=b):(max=b,min=a);
    if(a==b)
    printf("0\n");
    else
    printf("%lld\n",max-min-1);
    for(long long int i=min+1;i<max;i++)
    printf("%lld ",i);
}