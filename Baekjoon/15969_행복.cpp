#include<stdio.h>
int n,max=0,min=1001,t;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(min>t)
            min=t;
        if(max<t)
            max=t;
    }
    printf("%d",max-min);
}