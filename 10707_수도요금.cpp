#include<stdio.h>
int main(){
    int a[5],x,y;
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    x=a[0]*a[4];
    y=a[1];
    if(a[4]>a[2])
    y+=(a[4]-a[2])*a[3];
    x<y?printf("%d",x):printf("%d",y);
}