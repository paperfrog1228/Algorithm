#include <stdio.h>
int n,k,c;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        c++;
        if(c==k){
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
}