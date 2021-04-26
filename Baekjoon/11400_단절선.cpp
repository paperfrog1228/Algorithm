#include <bits/stdc++.h>
using namespace std;
int v,e,discovered[100010],number;
vector<int> graph[100010];
vector<pair<int,int>> edge;
int dfs(int here,int parent){
    discovered[here]=++number;
    int ret=number;
    for(int i=0;i<graph[here].size();i++){
        int next=graph[here][i];
        if(next==parent) continue;
        if(discovered[next]){
            ret=min(ret,discovered[next]);
            continue;
        }
        int low = dfs(next, here); 
        if(low > discovered[here])
            edge.push_back(make_pair(min(here, next), max(here,next))); 
        ret= min(ret, low);
    }
    return ret;
}
int main(){
    scanf("%d %d",&v,&e);
    int a,b;
    while(e--){
        scanf("%d %d",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1,0);
    sort(edge.begin(),edge.end());
    printf("%lld\n",edge.size());
    for(int i=0;i<edge.size();i++)
    printf("%d %d\n",edge[i].first,edge[i].second);
}
