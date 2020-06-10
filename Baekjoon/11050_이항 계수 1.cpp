#include <stdio.h>
int n,k,a=1,b=1,c=1;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        a*=i;
    for(int i=1;i<=k;i++)
        b*=i;
    for(int i=1;i<=n-k;i++)
        c*=i;
    printf("%d",a/(b*c));
}