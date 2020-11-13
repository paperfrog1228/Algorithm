#include <stdio.h>
#include <bitset>
#include <vector>
#include <math.h>
#define ll long long
using namespace std;
bitset<10001> b;
vector<int> v;
int n;
ll sumDiv(ll N){
	ll PF_idx = 0, PF = v[PF_idx], ans=1;
    while(PF*PF<=N){
        ll power=0;
        while(N%PF==0){N/=PF; power++;}
        ans*=((ll)pow((double)PF,power+1.0)-1)/(PF-1);
        PF=v[++PF_idx];
    }
    if(N!=1) ans*=((ll)pow((double)N,2.0)-1)/(N-1);
    return ans;
}
int main(){
    b.set();
    b[0]=b[1]=0;
    for(int i=2;i<=10000;i++){
        if(b[i]){
            v.push_back(i);
            for(int j=i*i;j<=n;j+=i) b[j]=0;
        }
    }
    scanf("%d",&n);
    printf("%lld\n",sumDiv(n)*5-24);
}