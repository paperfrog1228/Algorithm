#include <stdio.h>
int t,n;
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(n%4==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
}