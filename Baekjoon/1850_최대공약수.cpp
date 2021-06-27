#include<stdio.h>
long long a,b,c;
int gcd(long long a, long long b){
	if (a%b==0) return b;
	return gcd(b,a%b);
}
int main() {
	scanf("%lld %lld",&a,&b);
	c=gcd(a, b);
	for (int i=1;i<=c;i++) printf("1");
}