#include<stdio.h>
#include<vector>
#include<queue>
#define INF 987654321
using namespace std;
int s,t,n,res[505][505],level[505],work[505],total;
vector<int> adj[505];
bool bfs(){
    fill_n(level,n+2,-1);
    level[t]=-1;
    level[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int i=0;i<adj[cur].size();i++)
            if(level[adj[cur][i]]==-1&&res[cur][adj[cur][i]]>0)
                level[adj[cur][i]]=level[cur]+1,q.push(adj[cur][i]);
    }
    return level[t]!=-1;
}
int dfs(int a,int b,int flow){
    if(a==b) return flow;
    for(int &i=work[a];i<adj[a].size();i++){
        int next=adj[a][i];
        if(level[next]==level[a]+1&&res[a][next]>0){
            int df=dfs(next,b,min(res[a][next],flow));
            if(df>0){
                res[a][next]-=df,res[next][a]+=df;
                return df;
            }
        }
    }
    return 0;
}
void add(int x,int y,int w){
    res[x][y]=w;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int main(){
    s=0,t=501;
    int a;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==1) add(s,i,INF);
        if(a==2) add(i,t,INF);
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&a);
        add(i,j,a);
    }
    while(bfs()){
        fill(work, work+n+2, 0);
        work[t]=0;
            while(1){
                int flow=dfs(s,t,INF);
                if(flow==0) break;
                total+=flow;
            }
    }
    printf("%d\n",total);
    for(int i=1;i<=n;i++)
        if(level[i]!=-1)
        printf("%d ",i);
    printf("\n");
    for(int i=1;i<=n;i++)
        if(level[i]==-1)
        printf("%d ",i);
    printf("\n");
}