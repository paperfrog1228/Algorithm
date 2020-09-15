#include <iostream>
int t,n;
int a[1000005];
void solution(){
  long long max=0,ans=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  scanf("%d",&a[i]);
  for(int i=n;i>=1;i--){
    if(max>a[i])
    ans+=(max-a[i]);
    else max=a[i];
  }
  printf("%lld\n",ans);
}
int main(){
  scanf("%d",&t);
  while(t>0){
    solution();
    t--;
  }
}