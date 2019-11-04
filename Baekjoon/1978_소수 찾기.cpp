#include <stdio.h>
int main(){
  int n,a,ans=0;
  int prime[1002];
  for(int i=2;i<=1000;i++)
  {
    prime[i]=-1;
  }

  for(int i =2;i<=32;i++)
  { 
    int j=2;
    while(i*j<=1000)
    {
      prime[i*j]=1;
      j++;
    }
  }
  scanf("%d",&n);
  for(int i = 1;i<=n;i++)
  {
    scanf("%d",&a);
    if(prime[a]==-1)
    ans++;
  }
  printf("%d",ans);
  return 0;
}