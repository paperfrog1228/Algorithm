#include<stdio.h>
long long int a,b;
long long Sum(long long n){
    return n*(1+n)/2;
}
int main(){
scanf("%lld %lld",&a,&b);
if(b<a){
    int t=a;
    a=b;
    b=t;
}
printf("%lld",Sum(b)-Sum(a-1));
}