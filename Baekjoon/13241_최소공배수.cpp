#include<iostream>
#define ll long long
ll a,b;
ll gcd(ll a,ll b){
    while(b!=0){
		ll r = a%b;
		a= b;
		b= r;
	}
	return a;
}
int main(){
    scanf("%lld %lld",&a,&b);
    printf("%lld",a*b/gcd(a,b));
}
