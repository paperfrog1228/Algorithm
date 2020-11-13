#include <stdio.h>
int n,p,x;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&p);
        x^=p;
    }
    if(x==0) printf("cubelover");
    else printf("koosaga");
}