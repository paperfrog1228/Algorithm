#include<stdio.h>
int t,v,e;
int main(){
    scanf("%d",&t);
    while(t>0)
        scanf("%d %d",&v,&e),printf("%d\n",e-v+2),t--;
}