#include<stdio.h>
#include<map>
using namespace std;
int n,mx;
long long x,mxi;
map<long long, int> mp;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&x);
        mp[x]++;
        if(mx<mp[x])
            mx=mp[x],mxi=x;
        else if(mx==mp[x]&&x<mxi)
           mx=mp[x],mxi=x; 
    }
    printf("%lld",mxi);
}