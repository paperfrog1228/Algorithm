#include<stdio.h>
long long t,n,c;
int main(){
    scanf("%lld",&t);
    while(t--) scanf("%lld %lld",&n,&c),printf("%lld",n%c==0?n/c:n/c+1);
}