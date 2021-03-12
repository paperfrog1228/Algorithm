#include<iostream>
int a,b,c,n;
int main(){
    scanf("%d %d %d %d",&a,&b,&c,&n);
    for(int i=0;i<=300;i++)
    for(int j=0;j<=300;j++)
    for(int k=0;k<=300;k++)
    if(a*i+b*j+c*k==n) {printf("1");return 0;}
    printf("0");
}
