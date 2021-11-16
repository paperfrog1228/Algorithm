#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int n,a,b,ans[100010],ord[100010],vis[100010],cnt=1;
vector<int> adj[100010];
queue<int> q;
bool cmp(int a,int b){return ord[a]<ord[b];}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        scanf("%d %d",&a,&b), adj[a].push_back(b), adj[b].push_back(a);
    for(int i=1;i<=n;i++)
        scanf("%d",&ans[i]),ord[ans[i]]=i;
    for(int i=1;i<=n;i++)
        sort(adj[i].begin(),adj[i].end(),cmp);
    q.push(1);
    while(!q.empty()){
        int now=q.front(); q.pop();
        vis[now]++;
        if(ans[cnt++]!=now){
            printf("0");
            return 0;
        }
        for(auto next : adj[now]){
            if(vis[next]) continue;
            q.push(next);
        }
    }
    printf("1");
}