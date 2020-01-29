#include<stdio.h>
int main(){
    int n,i=1,j=1,k=1;
    scanf("%d",&n);
    if(n==1){
        printf("1");
        return 0;
    }
    while(1){
        if(6*(i-1)+2<=n&&n<=6*j+1){
        printf("%d",i+1);
        return 0;}
        i++;
        k++;
        j+=k;
    }
}