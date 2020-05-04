#include <stdio.h>
#define MIN(a,b) a<b?a:b
int minb,a,b,c,d,e;
int main(){
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    minb=MIN(a,b);
    minb=MIN(minb,c);
    printf("%d",minb+(MIN(d,e))-50);
}