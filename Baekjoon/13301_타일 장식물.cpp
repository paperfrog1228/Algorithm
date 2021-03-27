#include<stdio.h>
long long fib[88]={0,1};
int n;
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n+1;i++) fib[i]=fib[i-1]+fib[i-2];
    printf("%lld",fib[n]*2+fib[n+1]*2);
}
