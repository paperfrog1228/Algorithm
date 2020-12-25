#include <stdio.h>
#include <vector>
using namespace std;
int t,n,a;
int gcd(int a, int b){
  if(b == 0)
    return a;
  else
    return gcd(b, a%b);
}
int main(){
  scanf("%d",&t);
  while(t>0){
    vector<int> v;
    long long ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      scanf("%d",&a);
      v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    for(int j=i+1;j<v.size();j++)
      ans+=gcd(v[i],v[j]);
    
    printf("%lld\n",ans);
    t--;
  }
}