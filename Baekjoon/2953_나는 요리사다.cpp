#include <stdio.h>
int main(){
    int a,b,c,d,max=0,max_i;
    for(int i=1;i<=5;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a+b+c+d>max){
            max=a+b+c+d;
            max_i=i;
        }
    }
    printf("%d %d",max_i,max);
}