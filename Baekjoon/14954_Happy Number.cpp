#include <iostream>
#define ll long long int
ll n,v[1000];
ll get(ll n){
    ll ret=0,ten=1,tt;
    while(ten<=n){
        tt=n%(ten*10)/ten;
        ret+=tt*tt;
        ten*=10;
    }
    return ret;
}
int main(){
    scanf("%lld",&n);
    while(1){
        n=get(n);
        if(n==1){
            printf("HAPPY");
            return 0;
        }
        if(v[n]) break;
        v[n]++;
    }
    printf("UNHAPPY");
}