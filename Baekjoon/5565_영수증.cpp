#include<stdio.h>
int n,t;
int main(){scanf("%d",&n);for(int i=1;i<=9;i++)scanf("%d",&t),n-=t;printf("%d",n);}