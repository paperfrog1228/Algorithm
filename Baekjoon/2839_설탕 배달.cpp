#include<stdio.h>
int main(){
int n,x,y;
scanf("%d",&n);
x=n/5;
for(int i=x;i>=0;i--)
{
  if((n-5*i)%3==0)
  {
    printf("%d",i+(n-5*i)/3);
    return 0;
  }
}
printf("-1");
}