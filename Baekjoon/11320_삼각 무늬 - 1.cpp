#include<stdio.h>
int t,a,b;
int main(){
    scanf("%d",&t);
    while(t>0)
    scanf("%d %d",&a,&b),printf("%d\n",(a/b)*(a/b)),t--;
}