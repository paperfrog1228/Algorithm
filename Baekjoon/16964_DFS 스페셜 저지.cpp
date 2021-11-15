#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> adj[100010];
int n,a,b,vis[100010],ord[100010],ans[100010],i=1;
bool cmp(int a,int b) {
	return ord[a]<ord[b];
}
void dfs(int now){
    if(vis[now]) return;
    if(now!=ans[i++]) {
        printf("0");
        exit(0);
    }
    vis[now]++;
    for(auto next:adj[now])
        dfs(next);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++) {
        scanf("%d",&ans[i]);
        ord[ans[i]]=i;
    }
    for(int i=1;i<=n;i++)
        sort(adj[i].begin(),adj[i].end(),cmp);
    dfs(1);
    printf("1");
}