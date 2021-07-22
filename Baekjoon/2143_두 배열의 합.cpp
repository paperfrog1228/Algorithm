#include<stdio.h>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
ll t,a[1010],b[1010],na,nb,ans;
vector<ll> aa,bb;
int main(){
    scanf("%lld %lld",&t,&na);
    for(int i=1;i<=na;i++) scanf("%lld",&a[i]),a[i]+=a[i-1];
    for(int i=1;i<=na;i++)
    for(int j=0;j<i;j++)
        aa.push_back(a[i]-a[j]);
    scanf("%lld",&nb);
    for(int i=1;i<=nb;i++) scanf("%lld",&b[i]),b[i]+=b[i-1];
    for(int i=1;i<=nb;i++)
    for(int j=0;j<i;j++)
        bb.push_back(b[i]-b[j]);
    sort(aa.begin(),aa.end());
    sort(bb.begin(),bb.end());
    for(auto a:aa){
        ll goal=t-a;
        auto it = equal_range(bb.begin(), bb.end(),goal);
		ans += distance(it.first, it.second);
    }
    printf("%lld",ans);
}