#include <stdio.h>
int n,m,c,a,t;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&c);
        t+=c;
        if(t>m)
        t=c,a++;
    }
    if(n==0)
    a--;
    printf("%d",a+1);
}