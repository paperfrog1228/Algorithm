#include<stdio.h>
int k,a=1,b=0,c,i=1;
int main(){
scanf("%d",&k);
for(;i<=k;i++) c=a,a=b,b+=c;
printf("%d %d",a,b);
}