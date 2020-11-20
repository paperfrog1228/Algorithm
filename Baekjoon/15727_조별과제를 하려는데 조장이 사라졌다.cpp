#include <stdio.h>
int n,a;
int main(){
    scanf("%d",&n);
    a=n/5;
    if(n%5!=0) a++;
    printf("%d",a);
}