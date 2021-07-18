#include<stdio.h>
int a,b,c,d;
int main(){
    scanf("%d %d %d %d",&a,&b,&c,&d);
    while(b>0&&d>0)b-=c,d-=a;
    if(b>0) printf("PLAYER A");
    else if(d>0) printf("PLAYER B");
    else printf("DRAW");
}