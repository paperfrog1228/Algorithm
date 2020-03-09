#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2)
        for(int j=1;j<=n+n-1;j++){
            if(j%2)
            printf("*");
            else
            printf(" ");
        }
        else
        for(int j=1;j<=n+n;j++){
            if(j%2)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }    
}