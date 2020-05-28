#include<stdio.h>
int main(){
    int n=0,a;
    for(int i=1;i<=5;i++){
        scanf("%d",&a);
        n+=a*a;
    }
    printf("%d",n%10);
}