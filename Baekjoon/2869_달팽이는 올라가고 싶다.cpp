#include<iostream>
int a,b,c,d;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    d=(c-b)/(a-b);
    if((c-b)%(a-b)!=0) d++;
    printf("%d",d);
} 