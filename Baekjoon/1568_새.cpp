#include<stdio.h>
int n,b=1,a;
int main(){
    scanf("%d",&n);
    while(n>0) b>n?b=1:b=b,n-=b,a++,b++;
    printf("%d",a);
}