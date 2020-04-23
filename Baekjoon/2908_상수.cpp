#include<stdio.h>
int main(){
    int s[7];
    for(int i=1;i<=6;i++)
    scanf("%1d",&s[i]);
    int a=s[1]+s[2]*10+s[3]*100;
    int b=s[4]+s[5]*10+s[6]*100;
    printf("%d",a>b?a:b);
}