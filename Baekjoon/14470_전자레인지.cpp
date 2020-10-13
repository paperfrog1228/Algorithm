#include<stdio.h>
int a,b,c,d,e,f;
int main(){
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a<0) f=-1*a*c+d,a=0;
    printf("%d",(b-a)*e+f);
}