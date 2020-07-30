#include<stdio.h>
int a,b,c,d,e,f,x,y;
int main(){
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(a==0)
        y=c/b,x=(f-e*y)/d;
    if(b==0)
        x=c/a,y=(f-d*x)/e;
    if(d==0)
        y=f/e,x=(c-b*y)/a;
    if(e==0)
        x=f/d,y=(c-a*x)/b;
    if(a!=0&&b!=0&&d!=0&&e!=0)
    x=(c*e-b*f)/(a*e-b*d),y=(a*f-c*d)/(a*e-b*d);
    printf("%d %d",x,y);
}