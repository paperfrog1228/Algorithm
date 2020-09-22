#include<stdio.h>
#include<vector>
#include<queue>
#define INF 1<<30
#define min(a,b) a<b?a:b
using namespace std;
int n,p,s=1,t=2,f,ans,res[402][402],pa[402];
vector<int> adj[402];
void add_edge(int a,int b){
    res[a][b]=1;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void aug(int v,int min_edge,int d){
    if(d>4)
    return;
    if(v==s){f=min_edge; return;}
    if(pa[v]!=-1){
        aug(pa[v],min(res[pa[v]][v],min_edge),d++);
        res[pa[v]][v]-=f;
        res[v][pa[v]]+=f;
    }
}
int main(){
    scanf("%d %d",&n,&p);
    int a,b;
    for(int i=1;i<=p;i++){
        scanf("%d %d",&a,&b);
        add_edge(a,b);
    }
    while(1){
        f=0;
        int dist[402];
        fill_n(dist,402,INF);
        dist[s]=0;
        fill_n(pa,402,-1);
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(u==t) break;
            for(auto v:adj[u])
                if(res[u][v]>0&&dist[v]==INF)
                dist[v]=dist[u]+1,q.push(v),pa[v]=u;
        }
        aug(t,INF,0);
        if(f==0)break;
        ans+=f;
    }
    printf("%d",ans);
}