#include<bits/stdc++.h>
using namespace std;
int t,n,k,e[1010],deg[1010],dp[1010],a,b,w;
void f(){
    queue<int> q;
    vector<int> adj[1010];
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&e[i]),deg[i]=0,dp[i]=0;
    while(k--){
        scanf("%d %d",&a,&b);
        deg[b]++;
        adj[a].push_back(b);
    }
    scanf("%d",&w);
    for(int i=1;i<=n;i++) if(deg[i]==0) q.push(i),dp[i]=e[i];
    while(!q.empty()){
        int now=q.front();q.pop();
        for(auto next:adj[now]){
            dp[next]=max(dp[now]+e[next],dp[next]);
            deg[next]--;
            if(deg[next]==0){
                q.push(next);
            }
        }
    }
    printf("%d\n",dp[w]);
}
int main(){
   scanf("%d",&t);
   while(t--) f();
}
