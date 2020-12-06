#include<stdio.h>
int n,a,b,c=100,d=100;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==b) continue;
        a<b?c-=b:d-=a;
    }
    printf("%d\n%d",c,d);
}