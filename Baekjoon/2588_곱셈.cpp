#include<stdio.h>
int a,b[4],ans[5];
int main(){
    scanf("%d",&a);
    for(int i=1;i<=3;i++)
    scanf("%1d",&b[i]);
    for(int i=1;i<=3;i++)
        ans[4-i]=a*b[i];
    ans[4]=(b[1]*100+b[2]*10+b[3])*a;
    for(int i=1;i<=4;i++)
    printf("%d\n",ans[i]);
}