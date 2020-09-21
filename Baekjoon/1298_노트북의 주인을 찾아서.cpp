#include<stdio.h>
#include<queue>
#define INF 1<<30
#define min(a,b) a<b?a:b
using namespace std;
int n,m,s,t=202,f,res[203][203],p[203],ans;
void Aug(int v,int min_v){
    if(v==s) {f=min_v;return;}
    if(p[v]!=-1){
        Aug(p[v],min(min_v,res[p[v]][v]));
        res[p[v]][v]-=f;
        res[v][p[v]]+=f;
    }
}
int main(){
    scanf("%d %d",&n,&m);
    int a,b;
    for(int i=1;i<=n;i++)
        res[0][i]=1,res[n+i][202]=1;
    for(int i=1;i<=m;i++)
        scanf("%d %d",&a,&b),res[a][n+b]=1;
    while(1){
        f=0;
        int dist[203];
        fill_n(dist,203,INF);
        dist[s]=0;
        fill_n(p,203,-1);
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(u==t) break;
            for(int v=0;v<=202;v++)
                if(res[u][v]>0&&dist[v]==INF)
                q.push(v),dist[v]=dist[u]+1,p[v]=u;
        }
        Aug(t,INF);
        if(f==0) break;
        ans+=f;
    }
    printf("%d",ans);
}