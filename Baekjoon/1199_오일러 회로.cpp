#include<stdio.h>
#include<vector>
#include<list>
using namespace std;
struct ii{int first;int second;};
vector<ii> adj[1004];
int n,degree[1004],visit[1004];
list<int> cyc; 
void dfs(int cur){
    if(visit[cur]) return;
    visit[cur]++;
    for(int i=0;i<adj[cur].size();i++)
        dfs(adj[cur][i].first);
}
void EulerTour(list<int>::iterator i, int u){
    for(int j=0;j<adj[u].size();j++){
        ii &v = adj[u][j];
    	if(v.second){
            //printf("v.first: %d ",v.first);
            v.second = 0;
            for(int k=0;k<adj[v.first].size();k++){
                ii &uu=adj[v.first][k]; // 양방향 간선을 제거한다.
                if(uu.first==u&&uu.second){
                    uu.second=0;
                    break;
                }
            }
            EulerTour(cyc.insert(i,u),v.first);
        }
	}
}
int main(){
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&a);
        for(int k=1;k<=a;k++)
        adj[i].push_back({j,1}),degree[i]++;
    }
    for(int i=1;i<=n;i++)
        if(degree[i]%2==1){
            printf("-1");
            return 0;
        }
    dfs(1);
    for(int i=2;i<=n;i++){
        if(!visit[i]){
            printf("-1");
            return 0;
        }
    }
    EulerTour(cyc.begin(),1);
    printf("1 ");
    for(list<int>::iterator it = cyc.begin(); it!= cyc.end();it++)
        printf("%d ",*it);
}