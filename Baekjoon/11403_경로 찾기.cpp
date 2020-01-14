#include<stdio.h>
#include<vector>
using namespace std;
bool visit[101];
int adj[101][101],n;
void Dfs(int i){
   for(int j=1;j<=n;j++)
    if(adj[i][j]&&!visit[j]){
        visit[j]=true;
        Dfs(j);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        visit[i]=false;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&adj[i][j]);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++)
            visit[i]=false;
        Dfs(i);
        for(int j=1;j<=n;j++)
            if(visit[j])
                adj[i][j]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",adj[i][j]);}
            printf("\n");
    }    
}