#include <stdio.h>
#include <algorithm>
using namespace std;
int n;
long long k,m,l,r,tmp,ans,a[1000004];
int main(){
    scanf("%d %lld",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%lld",&a[i]);
    sort(a,a+n);
    l=0,r=1000000000;
    while(l<=r){
        m=(l+r)/2,tmp=0;
        for(int i=0;i<n;i++)
        if(a[i]<m)
            tmp+=m-a[i];
        if(tmp<=k){
            l=m+1;
            if(ans<m)
            ans=m;
        }
        else if(tmp>k)
        r=m-1;
    }
    printf("%lld",ans);
}