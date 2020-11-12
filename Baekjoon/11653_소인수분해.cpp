#include <stdio.h>
#include <bitset>
#include <vector>
#define ll long long
using namespace std;
int n;
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
vector<int> primeFactors(ll N){
    vector<int> factors;
    ll PF_idx=0,PF=v[PF_idx];
    while(PF*PF<=N){
        while(N%PF==0){N/=PF;factors.push_back(PF);}
        PF=v[++PF_idx];
    }
    if(N!=1) factors.push_back(N);
    return factors;
}
int main(){
    scanf("%d",&n);
    s(n+1);
    if(b[n]) printf("%d",n);
    else{
        vector<int> f=primeFactors(n);
        for(int i=0;i<f.size();i++)
        printf("%d\n",f[i]);
    }
}