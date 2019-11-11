#include<stdio.h>
int Rev(int a){
  int result=0;
  while(a>0){
    result*=10;
    result+=a%10;
    a/=10;
  }
  return result;
}
int main(){
  int ans=0,x;
  for(int i =1;i<=2;i++)
  {scanf("%d",&x);
  ans+=Rev(x);}
  printf("%d",Rev(ans));
  return 0;
}