#include<stdio.h>
long c;
long long power(long a,long n)
{
	if(n==0) return 1;
	if(n%2==0) return (power((a*a)%c,n/2))%c;
	else return (power((a*a)%c,n/2)%c*a)%c;
}
int main(){
long a,b;
scanf("%ld %ld %ld",&a,&b,&c);
printf("%lld",power(a,b));
return 0;
}
