#include<bits/stdc++.h>
using namespace std;
int n,deg[10010],t[10010],dp[10010],w,a,b,ans;
vector<int> adj[10010];
queue<int> q;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&t[i],&a);
        deg[i]=a;
        if(!deg[i]) q.push(i),dp[i]=t[i];
        while(a--){
            scanf("%d",&b);
            adj[b].push_back(i);
        }
    }
    while(!q.empty()){
        int now=q.front();q.pop();
        ans=max(ans,dp[now]);
        for(auto next:adj[now]){
            deg[next]--;
            dp[next]=max(dp[now]+t[next],dp[next]);
            if(!deg[next]) q.push(next);
        }
    }
    printf("%d",ans);
}
