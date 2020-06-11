#include <stdio.h>
int n,a,b;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=5;i++){
        scanf("%d",&a);
        if(a==n)
        b++;
    }
   printf("%d",b);
}