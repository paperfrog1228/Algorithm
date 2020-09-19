#include <stdio.h>
#include <queue>
#define INF 1<<30
#define min(a,b) a<b?a:b
int n,d,f,res[60][60],p[60],dist[60],s,t,ans;
char c1,c2;
int GetInt(char a){
    int ret=0;
    if('a'<=a&&a<='z') ret=a-'a'+26;
    else ret=a-'A';
    return ret;
}
void augment(int v, int minEdge){
    if(v == s) { f = minEdge; return; }
    else if (p[v] != -1){
        augment(p[v],min(minEdge,res[p[v]][v]));
        res[p[v]][v] -= f;
        res[v][p[v]] += f;
    }
}
int main(){
    s=GetInt('A'),t=GetInt('Z');
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf(" %c %c %d",&c1,&c2,&d);
        int a=GetInt(c1),b=GetInt(c2);
        res[a][b]+=d;
        res[b][a]+=d;
    }
    while(1){
        f = 0;
        int dist[53]={0,};
        std::fill_n(dist,52,INF);
        dist[s]=0;
        std::queue<int> q;
        q.push(s);
        std::fill_n(p,52,-1);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if (u == t) break;
            for(int v = 0; v <= 51; v++)
                if (res[u][v] > 0 && dist[v] == INF)
                    dist[v] = dist[u] + 1, q.push(v), p[v] = u;
        }
        augment(t,INF);
        if(f == 0) break;
        ans += f;
    }
    printf("%d",ans);
}