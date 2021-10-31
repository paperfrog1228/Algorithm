#include<stdio.h>
int a,b;
long long c,d=1;
int main(){
    scanf("%d %d",&a,&b);a--;a--;
    for(int i=0;i<=b;i++) c+=d,d+=a;
    printf("%lld",c);
}