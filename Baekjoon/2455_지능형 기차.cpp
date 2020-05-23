#include<stdio.h>
int main(){
    int a,b,n=0,max=0;
    for(int i=1;i<=4;i++){
        scanf("%d %d",&a,&b);
        n-=a;
        n+=b;
        if(max<n)
        max=n;
    }
    printf("%d",max);
}