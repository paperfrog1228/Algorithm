#include<stdio.h>
#include<vector>
#include<queue>
#include<memory.h>
#include<map>
#define MX 987654321
using namespace std;
struct node{int e;int w;};
struct cmp{bool operator()(node a,node b){return a.w>b.w;}};
int n,m,s,d,dist[505],vis[505];
vector<vector<pair<int,int>>> g;
vector<int> trace[505];
map<pair<int,int>,int> mp;
void tr(int goal){
    if(vis[goal]||goal==s) return;
    vis[goal]++;
    for(auto n:trace[goal]){
        mp[{n,goal}]++;
        tr(n);
    }
}
void dijk(bool second){
    priority_queue<node,vector<node>,cmp> pq;
    pq.push({s,0});
    while(!pq.empty()){
        node p=pq.top();pq.pop();
        int now=p.e;
        int now_dist=p.w;
        if(now_dist>dist[d]) return;
        if(now==d){
            if(second) return;
            tr(now);
        }
        for(auto np:g[now]){
            int next=np.first;
            int cnt=np.second;
            if(mp[{now,next}]>0) continue;
            if(now_dist+cnt==dist[next]){
                trace[next].push_back(now);
                continue;
            }
            if(now_dist+cnt<dist[next]){
                if(!second){
                    trace[next].clear();
                    trace[next].push_back(now);
                }
                dist[next]=now_dist+cnt; 
                pq.push({next,dist[next]});
            }
        }
    }
}
void solution(){
    for(int i=0;i<=n;i++) dist[i]=MX;
    dijk(0);
    if(dist[d]==MX) {printf("-1\n"); return;}
    for(int i=0;i<=n;i++) dist[i]=MX;
    dijk(1);
    if(dist[d]==MX) printf("-1\n");
    else printf("%d\n",dist[d]);
}
int main(){
    while(1){
        int a,b,c;
        scanf("%d %d",&n,&m);
        if(n==0) return 0;
        scanf("%d %d",&s,&d);
        g.resize(n+1);
        while(m--) scanf("%d %d %d",&a,&b,&c),
        g[a].push_back({b,c});
        solution();
        g.clear();
        mp.clear();
        for(int i=0;i<=n;i++) vis[i]=0,trace[i].clear();
    }
}