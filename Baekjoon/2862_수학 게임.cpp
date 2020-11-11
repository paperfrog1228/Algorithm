#include <stdio.h>
#define ll long long
ll n,maxi=2,fib[500000]={0,1,2},tmp;
ll get(int l,int r,ll z){
    int m;
    ll ret=0;
    while(l<=r){
        m=(l+r)/2;
        if(fib[m]<=z)
            ret=fib[m],l=m+1;
        else r=m-1;
    }
    return ret;
}
int main(){
    scanf("%lld",&n);
    for(int i=3;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        maxi=i;
        if(fib[i]>=n) break;
    }
    while(n>0)
        tmp=get(1,maxi,n),n-=tmp;
    printf("%lld\n",tmp);
}