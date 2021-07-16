#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> v;
int main(){
    scanf("%d",&n);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%d %d",&v[i].second,&v[i].first);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        printf("%d %d\n",v[i].second,v[i].first);
}