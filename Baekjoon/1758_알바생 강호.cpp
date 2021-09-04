#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int n;
long long ans;
vector<int> v;
int main(){
    scanf("%d",&n);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%d",&v[i]),v[i]*=-1;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]+i>=0) break;
        ans+=v[i]+i;
    }
    printf("%lld",ans*-1);
}