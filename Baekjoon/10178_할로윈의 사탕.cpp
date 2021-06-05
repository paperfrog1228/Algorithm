#include <stdio.h>
int n,a,b;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
    }
}
