#include<stdio.h>
#include<vector>
using namespace std;
vector<vector<int>> g;
int visit[10004];
int n,m,cnt=0;
vector<int> ans;
void DFS(int x){
    cnt++;
    visit[x]=1;    
    for(int i=0;i<g[x].size();i++){
        if(visit[g[x][i]])
            continue;
        DFS(g[x][i]);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    int a,b,max=0;
    vector<int> dummy;
    for(int i=1;i<=n;i++)
    g.push_back(dummy);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        cnt=0;
        for(int j=0;j<=n;j++)
            visit[j]=0;
        DFS(i);
        if(cnt>max){
            ans.clear();
            ans.push_back(i);
            max=cnt;
        }
        else if(cnt==max)
            ans.push_back(i);
    }
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
}