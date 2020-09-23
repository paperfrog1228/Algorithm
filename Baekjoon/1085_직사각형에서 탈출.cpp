#include<stdio.h>
#define min(a,b) a<b?a:b
int p[4],a;
int main(){
    for(int i=0;i<4;i++)
    scanf("%d",&p[i]);
    a=min(p[0],p[1]);
    a=min(p[2]-p[0],a);
    a=min(p[3]-p[1],a);
    printf("%d",a);
}