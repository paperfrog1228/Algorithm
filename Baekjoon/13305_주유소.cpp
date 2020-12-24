#include <stdio.h>
long long n,dis[100005],oil[100005],t,min=1000000007,ans;
int main(){
  scanf("%lld",&n);
  for(int i=1;i<n;i++)
    scanf("%lld",&dis[i]);
  for(int i=1;i<=n;i++){
    scanf("%lld",&t);
    if(min>t) min=t;
      ans+=min*dis[i];
  }
  printf("%lld",ans);
}