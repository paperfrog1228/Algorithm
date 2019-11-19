#include<stdio.h>
int main(){
  int girl,boy,intern,ans;
  scanf("%d %d %d",&girl,&boy,&intern);
  if(intern>=girl+boy)
  {
    printf("0");
  	return 0;
  }
  if(girl>=2*boy)
    ans=boy;
  else if(girl<2*boy)
    ans=girl/2;
  intern-=(girl+boy)-ans*3;
  if(intern>0)
  ans-=(intern+2)/3;
  
  printf("%d",ans);
	return 0;
}