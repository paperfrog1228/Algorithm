#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        printf(" ");
        for(int j=1;j<=2*i-1;j++)
        printf("*");
        printf(" ");
        printf("\n");
    }
}