#include<stdio.h>
#include<vector>
#define INF 600000009
using namespace std;
struct Node{int v;int time;};
vector<Node> g[505];
int n,m,x,y;
long long dist[505];
Node node;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=2;i<=n;i++)
        dist[i]=INF;
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&x,&node.v,&node.time);
        g[x].push_back(node);
    }
    dist[1]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=0;k<g[j].size();k++)
                if(dist[j]!=INF&&dist[g[j][k].v]>dist[j]+g[j][k].time){
                    dist[g[j][k].v]=dist[j]+g[j][k].time;
                    if(i==n){
                        printf("-1");
                        return 0;
                    }
                }
        }
    }
    for(int i=2;i<=n;i++)
        if(dist[i]==INF)
        printf("-1\n");
        else
        printf("%lld\n",dist[i]);
}