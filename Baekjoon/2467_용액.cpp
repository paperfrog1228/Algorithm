#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int n,l,r;
long long sum,a,b;
int main(){
    scanf("%d",&n);
    vector<long long> v(n);
    for(int i=0;i<n;i++) scanf("%lld",&v[i]);
    l=0,r=n-1;
    sum=abs(v[l]+v[r]),a=l,b=r;
    while(l+1<r){
        long long tmp1=abs(v[l+1]+v[r]),tmp2=abs(v[l]+v[r-1]);
        if(tmp1<tmp2) {
            l++;
            if(sum>tmp1)
            sum=tmp1,a=l,b=r;
        }
        else {
            r--;
            if(sum>tmp2)
            sum=tmp2,a=l,b=r;
        }
    }
    printf("%lld %lld",v[a],v[b]);
}
