#include<iostream>
int a,b,c;
int main(){
    scanf("%d %d %d",&a,&b,&c);
    c%=2;
    for(int i=1;i<=c;i++)
      a^=b;
    printf("%d\n",a);
}