#include<iostream>
#include<vector>
using namespace std;
int n,m,k,a[10005],visit[10005],s,t,mmin,ans;
vector<vector<int>> graph;
void dfs(int i){
    if(visit[i]) return;
    visit[i]++;
    if(mmin>a[i])
        mmin=a[i];
    for(int j=0;j<graph[i].size();j++)
    dfs(graph[i][j]);
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    graph.resize(n+2);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&s,&t);
        graph[s].push_back(t);
        graph[t].push_back(s);
    }
    for(int i=1;i<=n;i++){
        if(!visit[i]){
            mmin=10005;
            dfs(i);
            ans+=mmin;
            if(ans>k){
                printf("Oh no");
                return 0;
            }
        }
    }
    printf("%d",ans);
}