#include<bits/stdc++.h>
using namespace std;
string s;
int n,k,ans,vis[11];
map<string,int> mp;
vector<int> v;
void dfs(int i,string s,int cnt){
    vis[i]++;
    s+=to_string(v[i]);
    if(cnt>=k){
        if(mp.find(s)==mp.end()) ans++,mp[s]++;
        vis[i]=0;
        return;
    }
    for(int j=0;j<n;j++)
    if(!vis[j])
    dfs(j,s,cnt+1);
    vis[i]=0;
}
int main(){
    scanf("%d %d",&n,&k);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    for(int i=0;i<n;i++)
        dfs(i,"",1);
    printf("%d",ans);
}
