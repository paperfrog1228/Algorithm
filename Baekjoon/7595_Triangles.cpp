#include<stdio.h>
int n;
int main(){
    while(scanf("%d",&n)&&n!=0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++) printf("*");
            printf("\n");
        }
    }
}