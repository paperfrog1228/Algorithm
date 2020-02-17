#include <stdio.h>
int main(){
    long long a,b,c;
    while(1){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(!a&&!b&&!c)
            return 0;
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("right\n");
        else printf("wrong\n");
    }
}