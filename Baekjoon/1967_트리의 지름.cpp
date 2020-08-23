#include <stdio.h>
#include <vector>
using namespace std;
struct edge{int a;int w;int p;};
int n,a,b,c,max_n,v1[10004],v2[10004];
vector<edge> tree[10004];
edge MAX;
void DFS(int n,int w){
    if(v1[n])
        return;
    v1[n]++;
    if(MAX.w<w)
        MAX={n,w};
    for(int i=0;i<tree[n].size();i++)
        DFS(tree[n][i].a,w+tree[n][i].w);
}
void DFS2(int n,int w){
    if(v2[n])
        return;
    v2[n]++;
    if(MAX.w<w)
        MAX={n,w};
    for(int i=0;i<tree[n].size();i++){
        DFS2(tree[n][i].a,w+tree[n][i].w);
        DFS2(tree[n][i].p,w+tree[n][i].w);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        tree[a].push_back({b,c,a});
        tree[b].push_back({a,c,b});
    }
    DFS(1,0);
    max_n=MAX.a;
    MAX={0,0};
    DFS2(max_n,0);
    printf("%d",MAX.w);
}