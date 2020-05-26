#include<stdio.h>
#include<queue>
#include<vector>
#define INF 2000020
using namespace std;
struct Node{int v;int w;};
vector<Node> g[20004];
int n,m,k,u,dist[20004];
Node node;
struct compare{
    bool operator()(Node &a,Node &b){
        return a.w>b.w;
    }
};
priority_queue<Node,vector<Node>,compare> pq;
int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++)
        dist[i]=INF;
    dist[k]=0;
    node.v=k,node.w=0;
    pq.push(node);
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&u,&node.v,&node.w);
        g[u].push_back(node);
    }
    while(!pq.empty()){
        node=pq.top();
        pq.pop();
        if(dist[node.v]<node.w)
            continue;
        for(int i=0;i<g[node.v].size();i++){
            if(dist[g[node.v][i].v]>dist[node.v]+g[node.v][i].w){
                dist[g[node.v][i].v]=dist[node.v]+g[node.v][i].w;
                Node newNode;
                newNode.w=dist[g[node.v][i].v];
                newNode.v=g[node.v][i].v;
                pq.push(newNode);
            }
        }
    }
    for(int i=1;i<=n;i++)
        if(dist[i]==INF)
        printf("INF\n");
        else
        printf("%d\n",dist[i]);
}