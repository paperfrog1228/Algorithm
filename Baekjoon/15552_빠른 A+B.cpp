#include<iostream>
int n,a,b;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    scanf("%d %d",&a,&b),printf("%d\n",a+b);
}