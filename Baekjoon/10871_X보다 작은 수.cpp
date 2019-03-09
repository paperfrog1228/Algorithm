#include<stdio.h>
int main(){
int n,x,a;
scanf("%d %d",&n,&x);
for(int i = 1; i<=n;i++){
scanf("%d",&a);
if(a<x) printf("%d ",a);}
return 0;
}
