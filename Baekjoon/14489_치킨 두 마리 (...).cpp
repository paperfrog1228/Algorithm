#include <stdio.h>
long long a,b,c;
int main(){
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a+b-2*c>=0)
    printf("%lld",a+b-2*c);
    else
    printf("%lld",a+b);    
}