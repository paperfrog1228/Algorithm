#include <stdio.h>
int n,a,b;
int main(){
    scanf("%d",&n);
    while(n>0)
    scanf("%d%c%d",&a,&b,&b),n--,printf("%d\n",a+b);
}