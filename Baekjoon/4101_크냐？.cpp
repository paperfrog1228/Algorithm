#include <stdio.h>
int main(){
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        return 0;
        a>b?printf("Yes\n"):printf("No\n");
    }
}