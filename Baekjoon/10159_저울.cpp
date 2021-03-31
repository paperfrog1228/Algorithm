#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
int n,m,deg[104],a,b,vis[104],ans[104];
vector<int> v[104];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        deg[b]++;
    }
    for(int i=1;i<=n;i++) ans[i]=n-1;
    for(int i=1;i<=n;i++){
        if(deg[i]!=0) continue;
        queue<int> q;  q.push(i);
        vector<int> check,overlab;
        while(!q.empty()){
            int now=q.front(); q.pop();
            if(vis[now]>0) overlab.push_back(now);
            vis[now]++;
            check.push_back(now);
            for(int i=0;i<v[now].size();i++)
                q.push(v[now][i]);
        }
        for(int i=0;i<check.size();i++) ans[check[i]]-=check.size()-1;
        for(int i=0;i<overlab.size();i++) ans[overlab[i]]+=overlab.size()-1;

    }
    for(int i=1;i<=n;i++)
    printf("%d\n",ans[i]);
}