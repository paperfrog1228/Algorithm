#include<stdio.h>
int main(){
    int l,p,d;
    scanf("%d %d",&l,&p);
    for(int i=1;i<5;i++){
        scanf("%d",&d);
        printf("%d ",d-l*p);
    }
    scanf("%d",&d);
    printf("%d",d-l*p);
}