#include<stdio.h>
int main(){
    int sum=0,a;
    for(int i=1;i<=5;i++){
        scanf("%d",&a);
        if(a<40)
        a=40;
        sum+=a;
    }
    printf("%d ",sum/5);
}
