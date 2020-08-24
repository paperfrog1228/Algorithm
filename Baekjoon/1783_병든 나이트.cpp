#include <stdio.h>
long long n,m,a,tmp;
int main(){
    scanf("%lld %lld",&n,&m);
    if(n==1||m==1) a=1;
    else if(n==2){
        tmp=m/2;
        if(m%2==1)
        tmp++;
        if(tmp>4) tmp=4;
        a=tmp;
    }
    else if(m==2) a=2;
    else if(m==3) a=3;
    else if(m==4||m==5||m==6) a=4;
    else a=m-2;
    printf("%lld",a);
}