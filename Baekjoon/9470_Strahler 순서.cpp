#include<iostream>
#include<algorithm>
#include<utility>
#include<queue>
#include<vector>
using namespace std;
void solution(){
    queue<int> q,qq;
    int p,n,m,a,b,ans=1;
    scanf("%d %d %d",&p,&n,&m);
    vector<int> degree(n+1),strahler(n+1);
    vector<vector<int>> graph(n+1),strahler_v(n+1);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        graph[a].push_back(b);
        degree[b]++;
    }
    for(int i=1;i<=n;i++)if(degree[i]==0) q.push(i),strahler[i]=1;
    while(!q.empty()){
        while(!q.empty()){
            int now=q.front();q.pop();
            for(int i=0;i<graph[now].size();i++){
                int nnow=graph[now][i];
                degree[nnow]--;
                strahler_v[nnow].push_back(strahler[now]);
                if(degree[nnow]==0) qq.push(nnow);
            }
        }
        while(!qq.empty()){
            int now=qq.front();qq.pop();
            sort(strahler_v[now].begin(),strahler_v[now].end(),greater<int>());
            int mmax=strahler_v[now][0];
            if(strahler_v[now].size()==1||mmax!=strahler_v[now][1]) strahler[now]=mmax;
            else strahler[now]=mmax+1;
            q.push(now);
            if(ans<strahler[now]) ans=strahler[now];
        }
    }
    printf("%d %d\n",p,ans);
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--) solution();
}
