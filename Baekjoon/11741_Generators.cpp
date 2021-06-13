#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,k,x,a,b,c,mni,check[10010];
ll sum,ans,mn_sub=987654321,mn_second=-1;
vector<int> v;
void f(int index){
    scanf("%d %d %d %d",&x,&a,&b,&c);
    int mx=x,mxi=0,mx2=-1,mx2i=-1,cur=x,now=0,i=1;
    memset(check,0,sizeof(check));
    vector<pair<int,int>> vv={{x,0}};
    check[x]++;
    while(1){
        now=(a*cur+b)%c;
        if(check[now]) break;
        cur=now;
        check[now]++;
        vv.push_back({now,i});
        i++;
    }
    sort(vv.begin(),vv.end());
    mx=vv.back().first; mxi=vv.back().second;
    sum+=mx;
    v[index]=mxi;
    if(vv.size()==1) return;
    mx2=vv[vv.size()-2].first; mx2i=vv[vv.size()-2].second;
    ll tmp=mx-mx2;
    if(tmp%k==0) return;
    if(mn_sub>tmp) mn_sub=tmp,mni=index,mn_second=mx2i;
}
int main(){
    scanf("%d %d",&n,&k);
    v.resize(n);
    for(int i=0;i<n;i++) f(i);
    if(sum%k==0&&mn_sub!=987654321) sum-=mn_sub,v[mni]=mn_second;
    if(sum%k==0) {printf("-1"); return 0;}
    printf("%lld\n",sum);
    for(int i=0;i<n;i++) printf("%d ",v[i]);
}
