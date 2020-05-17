#include<stdio.h>
int a,b,c;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    int tmp=a*60+b+c;
    a=(tmp/60)%24;
    b=tmp%60;
    printf("%d %d",a,b);
}