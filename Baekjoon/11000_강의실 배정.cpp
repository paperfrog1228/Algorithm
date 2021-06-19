#include<bits/stdc++.h>
using namespace std;
int n,cnt=1,ans=1;
priority_queue<int,vector<int>,greater<int>> pq;
int main(){
    scanf("%d",&n);
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) scanf("%d %d",&v[i].first,&v[i].second);
    sort(v.begin(),v.end());
    pq.push(v[0].second);
    for(int i=1;i<v.size();i++){
        if(v[i].first<pq.top()) pq.push(v[i].second),cnt++;
        else pq.pop(),pq.push(v[i].second);
        ans=max(cnt,ans);
    }
    printf("%d",ans);
}
