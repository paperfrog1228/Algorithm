#include <stdio.h>
int n,a,b;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&a,&b),printf("Case %d: %d\n",i,a+b);
}
