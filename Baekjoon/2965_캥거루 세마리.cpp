#include <stdio.h>
#define m(a,b) (a>b?a:b)-1
int a,b,c;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",m(c-b,b-a));
}