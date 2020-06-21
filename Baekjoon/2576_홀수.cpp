#include<stdio.h>
int sum,min=101,a;
int main(){
    for(int i=1;i<=7;i++){
        scanf("%d",&a);
        if(a%2==1){
        sum+=a;
        if(min>a)
        min=a;
        }
    }
    if(sum==0){
        printf("-1");
        return 0;
    }
    printf("%d\n%d",sum,min);
}