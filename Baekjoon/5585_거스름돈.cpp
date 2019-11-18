#include<stdio.h>
int main() {
  int n,coin[6]={500,100,50,10,5,1},ans=0;
  scanf("%d",&n);
  n=1000-n;
  for(int i=0;i<=5;i++)
  {
    ans+=n/coin[i];
    n=n%coin[i];
  }
  printf("%d",ans);
	return 0;
}