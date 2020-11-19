#include <stdio.h>
int n,a,b,c;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    scanf("%d %d %d",&a,&b,&c),printf("Scenario #%d:\n",i);
    if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
    printf("yes\n\n");
    else
    printf("no\n\n");
    }
}