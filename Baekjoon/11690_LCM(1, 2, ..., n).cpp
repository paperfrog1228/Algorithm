#include <stdio.h>
#include <bitset>
#include <vector>
#define ll long long
using namespace std;
int n;
ll mod=4294967296,ans=1;
bitset<100000010> b;
vector<ll> v;
void s(int n){
    b.set();
    b[0]=b[1]=0;
    for(ll i=2;i<=n;i++){
        if(b[i]){
            for(ll j=i*i;j<=n;j+=i) b[j]=0;
            v.push_back(i);
        }
    }
}
int main(){
    scanf("%d",&n);
    s(n);
    for(int i=0;i<v.size();i++){
        ll tmp=v[i];
        while(v[i]<=n/tmp)
            tmp*=v[i];
        ans*=tmp;
        ans%=mod;
    }
    printf("%lld",ans);
}