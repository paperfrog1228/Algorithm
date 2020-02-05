#include<stdio.h>
int main(){
int n;
 scanf("%d",&n);
 for(int j=n-1;j>=0;j--){
    for(int i=1;i<n-j;i++)
        printf(" ");
    for(int i=1;i<=1+j*2;i++)
     printf("*");
    printf("\n");
 }
 for(int j=1;j<=n-1;j++){
    for(int i=1;i<n-j;i++)
        printf(" ");
    for(int i=1;i<=1+j*2;i++)
     printf("*");
    if(j!=n-1)
    printf("\n");
 }
}