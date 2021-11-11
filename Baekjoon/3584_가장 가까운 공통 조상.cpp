#include<stdio.h>
#include<vector>
#include<memory.h>
using namespace std;
int t,n,a,b,r,dep[100010],pa[10010][20];
bool root[10010];
vector<int> adj[10010];
void dfs(int now){
    for(auto next:adj[now]){
        dep[next]=dep[now]+1;
        pa[next][0]=now;
        dfs(next);
    }
}
int lca(int a,int b){
    if(dep[a]<dep[b]){
        int t=a;
        a=b;b=t;
    }
    int diff=dep[a]-dep[b];
    int i=0;
    while(diff!=0){
        if(diff%2==1) a=pa[a][i];
        diff/=2;
        i++;
    }
    if(a!=b){
        for(int i=17;i>=0;i--)
            if(pa[a][i]!=-1&&pa[a][i]!=pa[b][i])
                a=pa[a][i],b=pa[b][i];
        a=pa[a][0];
    }
    return a;
}
void tc(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) dep[i]=-1,root[i]=true;
    memset(pa,-1,sizeof(pa));
    for(int i=1;i<n;i++){
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        root[b]=false;
    }
    for(int i=1;i<=n;i++)
        if(root[i]) r=i;
    dep[r]=0;
    dfs(r);
    for(int j=1;j<17;j++)
    for(int i=1;i<=n;i++)
        if(pa[i][j-1]!=-1&&i!=r)
            pa[i][j]=pa[pa[i][j-1]][j-1];
    scanf("%d %d",&a,&b);
    printf("%d\n",lca(a,b));
    for(int i=1;i<=n;i++)
        adj[i].clear();
}
int main(){
    scanf("%d",&t);
    while(t--) tc();
}