#include<stdio.h>
int main(void)
{
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>b)
  {printf(">");
  return 0;}
   if(a<b)
  {printf("<");
  return 0;}
   if(a==b)
  {printf("==");
  return 0;}
}
