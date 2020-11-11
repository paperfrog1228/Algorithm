#include<bitset>
#include<vector>
#define ll unsigned long long 
#define vi std::vector<ll>
ll _sieve_size;
std::bitset<10000010> bs; 
vi primes;
void sieve(ll upperbound){
    _sieve_size=upperbound +1;
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2;i<=_sieve_size;i++)
        if(bs[i]){
            for(ll j=i*i;j<=_sieve_size;j+=i)
                bs[j]=0;
    		primes.push_back(i);
        }
}
bool isPrime(ll N){
	if(N<=_sieve_size) return bs[N];
	for(ll i=0;i<primes.size();i++)
        if(N%primes[i]==0) return false;
    return true;
}
ll A,B,ans;
int main(){
    scanf("%lld %lld",&A,&B);
    sieve(10000001);
    for(ll i=0;i<primes.size();i++){
        ll tmp=primes[i];
        while(primes[i]<=B/tmp){
            if(tmp*primes[i]>=A)ans++;
            tmp*=primes[i];
        }
    }
    printf("%lld",ans);
}