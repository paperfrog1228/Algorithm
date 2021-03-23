#include<iostream>
#include<math.h>
#include<algorithm>
#define ll long long
#define MAX 2000000001
ll n,k,nk,n5,n2,k5,k2,nk5,nk2,tmp=1;
int main(){
    scanf("%lld %lld",&n,&k);
    nk=n-k;
    int i=1;
    while(tmp<=MAX)
        tmp=pow(5,i),
        n5+=n/tmp,k5+=k/tmp,nk5+=nk/tmp,i++;
    i=tmp=1;
    while(tmp<=MAX)
        tmp=pow(2,i),
        n2+=n/tmp,k2+=k/tmp,nk2+=nk/tmp,i++;
    printf("%lld",std::min(n5-nk5-k5,n2-nk2-k2));
}
