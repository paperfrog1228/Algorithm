#include<bits/stdc++.h>
#define MAX 100010
using namespace std;
vector<vector<int>> adj;
stack<int> st;
int v,e,counter,cycle;
int dfsn[MAX];
bool ans=true;
int dfs(int here,int prev){
    int c=0,f=0;
    bool back=false;
    for(auto next:adj[here]){
        if(next==prev) continue;
        if(!dfsn[next]){
            dfsn[next]=dfsn[here]+1;
            c+=dfs(next,here);
        }
        else if(dfsn[next]<dfsn[here]) c++;
        else if(dfsn[next]>dfsn[here]) f--;
    }
    if(c>=2) ans=false;
    return c+f;
}
int main(){
    scanf("%d %d",&v,&e);
    adj.resize(v+1);
    int a,b;
    while(e--){
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfsn[1]=1;
    dfs(1,0);
    if(ans) printf("Cactus");
    else printf("Not cactus");
}
