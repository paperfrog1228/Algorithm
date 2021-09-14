#include <bits/stdc++.h>
#define ll long long 
using namespace std;
vector<pair<ll,ll>> v;
int n;
ll ans,now,s=-1000000010,e=-1000000010;
int main(){
    scanf("%d",&n);
    v.resize(n);
    for(int i=0;i<n;i++) 
    scanf("%lld %lld",&v[i].first,&v[i].second);
    sort(v.begin(),v.end());
    for(auto l:v){
        if(e<l.first) ans+=e-s,s=l.first;
        e=max(e,l.second);
    }
    ans+=e-s;
    printf("%lld",ans);
}