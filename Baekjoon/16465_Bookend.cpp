#include <stdio.h>
int n,m,l,t,sum;
int main(){
    scanf("%d %d %d",&n,&m,&l);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        sum+=t;
    }
    if(m==sum)
        printf("0");
    else if(m<sum||m<l)
        printf("-1");
    else if(l<=sum||sum+l<=m)
        printf("1");
    else
        printf("-1");
}