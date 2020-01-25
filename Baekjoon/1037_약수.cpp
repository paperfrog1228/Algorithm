#include<stdio.h>
int main(){
    int max=1,min=10000000,n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(max<t)
        max=t;
        if(min>t)
        min=t;
    }
    printf("%d",max*min);
}
