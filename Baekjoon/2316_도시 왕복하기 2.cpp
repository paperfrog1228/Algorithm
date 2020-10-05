#include<stdio.h>
#include<vector>
#include<queue>
#define INF 987654321
using namespace std;
int n,p,res[810][810],s=401,t=2,f,ans,pa[810];
vector<int> adj[815];
void add_edge(int a,int b){
    res[a+400][b]=1;
    res[b+400][a]=1;
    adj[a+400].push_back(b);
    adj[b].push_back(a+400);
    adj[b+400].push_back(a);
    adj[a].push_back(b+400);
}
void aug(int v,int min_edge){
    if(v==s){
        f=min_edge;return;
    }
    if(pa[v]!=-1){
        aug(pa[v],min(min_edge,res[pa[v]][v]));
        res[pa[v]][v]-=f;
        res[v][pa[v]]+=f;
    }
}
int main(){
    scanf("%d %d",&n,&p);
    for(int i=1;i<=n;i++)
        res[i][i+400]=1,adj[i].push_back(i+400),adj[i+400].push_back(i);
    int a,b;
    for(int i=1;i<=p;i++){
        scanf("%d %d",&a,&b);
        add_edge(a,b);
    }
    while(1){
        f=0;
        int dist[815];
        fill_n(dist,n+410,INF);
        fill_n(pa,n+410,-1);
        dist[s]=0;
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(u==t) break;
            for(auto v:adj[u]){
                if(res[u][v]<=0||dist[v]!=INF)
                    continue;
                q.push(v);pa[v]=u,dist[v]=dist[u]+1;
            }
        }
        aug(t,INF);
        if(f==0)break;
        ans+=f;
    }
    printf("%d",ans);
}