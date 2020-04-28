#include<stdio.h>
int n,a,b,t;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        t==0?a++:b++;
    }
    if(a>b)
    printf("Junhee is not cute!");
    else
    printf("Junhee is cute!");
}