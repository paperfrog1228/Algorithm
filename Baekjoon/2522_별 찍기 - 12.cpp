#include <iostream>
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++) printf(" ");
    for(int j=n-i;j<n;j++) printf("*");
    printf("\n");
    }
    for(int i=n-1;i>=1;i--){
    for(int j=1;j<=n-i;j++) printf(" ");
    for(int j=n-i;j<n;j++) printf("*");
    printf("\n");
    }
}