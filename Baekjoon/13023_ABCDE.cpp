#include<bits/stdc++.h>
using namespace std;
vector<int> adj[2020];
int n,m,vis[2020],mxdep;
void dfs(int now,int dep){
    if(vis[now]) return;
    vis[now]++;
    mxdep=max(mxdep,dep);
    if(mxdep>=5) return;
    for(auto next:adj[now])  dfs(next,dep+1);
    vis[now]--;
}
int main(){
    scanf("%d %d",&n,&m);
    int a,b;
    while(m--){
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        if(mxdep>=5) break;
        dfs(i,1);
        for(int j=0;j<n;j++) vis[j]=0;
    }
    if(mxdep>=5) printf("1");
    else printf("0");
}