#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
long long a;
int main(){
    scanf("%d %d",&n,&m);
    vector<long long> v(n);
    for(int i=0;i<n;i++) scanf("%lld",&v[i]);
    while(m>0){
        sort(v.begin(),v.end());
        long long mid=v[0]+v[1];
        v[0]=v[1]=mid;
        m--;
    }
    for(int i=0;i<n;i++) a+=v[i];
    printf("%lld",a);
}