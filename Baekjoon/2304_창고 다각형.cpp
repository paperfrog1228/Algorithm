#include<bits/stdc++.h>
using namespace std;
int n,mx,mxn,ans;
vector<pair<int,int>> v;
int main(){
    scanf("%d",&n); v.resize(n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&v[i].first,&v[i].second);
        if(v[i].second>mx) mx=v[i].second,mxn=v[i].first;
    }
    sort(v.begin(),v.end());
    int curn=v[0].first,curh=v[0].second;
    for(int i=0;i<n;i++){
        if(curn==mxn) break;
        if(curh<=v[i].second){
            ans+=(v[i].first-curn)*curh;
            curn=v[i].first,curh=v[i].second;
        }
    }
    curn=v[n-1].first;curh=v[n-1].second;
    for(int j=n-1;j>=0;j--){
        if(curn==mxn) break;
        if(curh<=v[j].second){
            ans+=(curn-v[j].first)*curh;
            curn=v[j].first,curh=v[j].second;
        }
    }
    ans+=mx;
    printf("%d",ans);
}
