#include<stdio.h>
int a,b,t;
int main(){
    for(int i=0;i<4;i++){
        scanf("%d",&t);
        a+=t;
    }
    for(int i=0;i<4;i++){
        scanf("%d",&t);
        b+=t;
    }
    a>b?printf("%d",a):printf("%d",b);
}