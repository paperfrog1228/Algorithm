#include<stdio.h>
int n,a,b,c;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&a,&b),c+=b%a;
    printf("%d",c);
}