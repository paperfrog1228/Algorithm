#include<stdio.h>
#include<vector>
#include<queue>
#define INF 987654321
#define Init for(int i=0;i<=n;i++) dist[i]=INF
using namespace std;
struct edge{int x;int cost;};
struct cmp{bool operator()(edge &a,edge &b){return a.cost>b.cost;}};
int n,e,v1,v2,dist[805],r1,r2;
long long int ans;
vector<edge> v[805];
void dijk(int s){
    priority_queue<edge,vector<edge>,cmp> pq;
    dist[s]=0;
    pq.push({s,0});
    while(!pq.empty()){
        int cur=pq.top().x;
        int cost=pq.top().cost;
        pq.pop();
        for (int i=0;i<v[cur].size();i++){
            int next=v[cur][i].x;
            int nCost=v[cur][i].cost;
            if (dist[next] > cost+nCost){
                dist[next] = cost + nCost;
                pq.push({next,dist[next]});
            }
        }
    }
}
int main(){
    scanf("%d %d",&n,&e);
    int a,b,c;
    for(int i=1;i<=e;i++){
        scanf("%d %d %d",&a,&b,&c);
        v[a].push_back({b,c}),v[b].push_back({a,c});
    }
    scanf("%d %d",&v1,&v2);
    bool f1=true,f2=true;
    Init;dijk(1);
    r1=dist[v1],r2=dist[v2];
    if(r1==INF) f1=false;
    if(r2==INF) f2=false;
    Init;dijk(v1);
    if(f2)r2+=dist[v2]+dist[n];
    Init;dijk(v2);
    if(f1)r1+=dist[v1]+dist[n];
    if(!f1&&!f2) ans=-1;
    r1<r2?ans=r1:ans=r2;
    if(ans>=INF) ans=-1;
    printf("%lld",ans);
}