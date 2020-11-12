#include <stdio.h>
#include <bitset>
#include <vector>
#define ll long long
#define MAX 5000000
using namespace std;
bitset<MAX+10> bs;
vector<ll> v;
int n,k;
void s(ll n){
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2;i<=n;i++){
        if(bs[i]){
            for(ll j=i*i;j<=MAX;j+=i)
                bs[j]=0;
            v.push_back(i);
        }
    }
}
int main(){
    scanf("%d",&n);
    s(MAX);
    while(n>0){
        scanf("%d",&k);
        if(bs[k]) printf("%d\n",k);
        else{
            int pf_i=0,pf=v[0];
            while(pf*pf<=k){
                while(k%pf==0)k/=pf,printf("%d ",pf);
                pf=v[++pf_i];
            }
            if(k!=1) printf("%d",k);
            printf("\n");
        }
        n--;
    }
}