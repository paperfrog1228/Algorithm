#include<stdio.h>
int main(){
    int n,max=-1000001,min=1000001,a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>max)
        max=a;
        if(a<min)
        min=a;
    }
    printf("%d %d",min,max);
}