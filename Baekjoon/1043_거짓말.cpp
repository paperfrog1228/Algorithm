#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int n,m,x,xx,adj[55][55],vis[55],ans;
queue<int> q;
bool trust[55];
vector<int> v[55];
int main(){
    scanf("%d %d %d",&n,&m,&x);
    for(int i=1;i<=x;i++) scanf("%d",&xx),q.push(xx);
    for(int i=1;i<=m;i++){
        scanf("%d",&x);
        v[i].resize(x);
        for(int j=0;j<x;j++)
        scanf("%d",&v[i][j]);
        for(int j=0;j<x;j++)
        for(int k=0;k<x;k++)
        if(j!=k) adj[v[i][j]][v[i][k]]=adj[v[i][k]][v[i][j]]=1;
    }
    while (!q.empty()){
        int now=q.front();
        q.pop();
        trust[now]=true;
        vis[now]++;
        for(int i=1;i<=n;i++)
        if(adj[now][i]&&!vis[i])
        q.push(i);
    }
    for(int i=1;i<=m;i++){
        bool pos=true;
        for(int now:v[i]){
            if(trust[now]){
                pos=false;
                break;
            }
        }
        if(pos) ans++;
    }
    printf("%d",ans);
}