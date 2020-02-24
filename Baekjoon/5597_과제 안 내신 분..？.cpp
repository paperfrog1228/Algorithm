#include<stdio.h>
int main(){
    int a[31],t;
    for(int i=1;i<=30;i++)
    a[i]=0;
    for(int i=1;i<=28;i++){
    scanf("%d",&t);
    a[t]=1;
    }
    for(int i=1;i<=30;i++)
    if(!a[i])
    printf("%d\n",i);
}