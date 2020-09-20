#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
#define INF 1<<30
#define min(a,b) a<b?a:b
int n,m,mm,k,bridge,f,s,t,ans,p[2004],res[2004][2004];
vector<int> adj[2004];
void augment(int v, int minEdge){
    if(v == s) { f = minEdge; return; }
    else if (p[v] != -1){
        augment(p[v],min(minEdge,res[p[v]][v]));
        res[p[v]][v] -= f;
        res[v][p[v]] += f;
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    mm=n+m-min(n,m);
    s=0,bridge=2002,t=2003;   
    int w,g;
    for(int i=1;i<=n;i++){
        scanf("%d",&w);
        for(int j=1;j<=w;j++){
            scanf("%d",&g);
            res[i][g+1000]=1;
            adj[i].push_back(g+1000);
            adj[g+1000].push_back(i);
        }
        res[s][i]=1;
        adj[s].push_back(i);
        adj[i].push_back(s);
        res[bridge][i]=1;
        adj[bridge].push_back(i);
        adj[i].push_back(bridge);
    }
    for(int i=1;i<=m;i++){
        res[i+1000][t]=1;
        adj[i+1000].push_back(t);
        adj[t].push_back(i+1000);
    }
    res[s][bridge]=k;
    adj[s].push_back(bridge);
    adj[bridge].push_back(s);
    while(1){
        f = 0;
        int dist[2004]={0,};
        fill_n(dist,2004,INF);
        dist[s]=0;
        queue<int> q;
        q.push(s);
        fill_n(p,2004,-1);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if (u == t) break;
            for(auto v:adj[u])
                if (res[u][v] > 0 && dist[v] == INF)
                    dist[v] = dist[u] + 1, q.push(v), p[v] = u;
        }
        augment(t,INF);
        if(f == 0) break;
        ans += f;
    }
    printf("%d",ans);
}