#include <stdio.h>
long long n,m,ans;
int main(){
    scanf("%lld %lld",&n,&m);
    ans=n-m;
    if(ans<0)
    ans*=-1;
    printf("%lld",ans);
}