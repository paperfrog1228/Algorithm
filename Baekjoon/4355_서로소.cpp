#include <stdio.h>
#include <vector>
#include <bitset>
#define max 100000
#define ll long long
using namespace std;
bitset<max+10> b;
ll n;
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
ll EulerPhi(ll N){
	ll PF_idx=0, PF=v[PF_idx],ans=N;
    while(PF*PF<=N){
        if(N%PF==0) ans-=ans/PF;
        while(N%PF==0) N/=PF;
        PF=v[++PF_idx];
    }
    if(N!=1) ans-=ans/N;
    return ans;
}
int main(){
    s(max);
    while(1){
        scanf("%lld",&n);
        if(n==0) return 0;
        printf("%lld\n",EulerPhi(n));
    }
}