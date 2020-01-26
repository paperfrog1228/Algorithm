#include<stdio.h>
int main(){
long long num,n;
scanf("%lld %lld",&num,&n);
if(num==1||num==5)
    printf("%lld",num+n*8-1);
if(num==3)
    printf("%lld",num+n*4-1);
if(num==2){
    num+=(n/2)*8;
    if(n%2==1)
    num+=6;
    printf("%lld",num-1);
}
if(num==4){
    num+=(n/2)*8;
    if(n%2==1)
    num+=2;
    printf("%lld",num-1);
}
}