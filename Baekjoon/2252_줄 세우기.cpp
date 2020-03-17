#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int n,m,degreee[32005];
vector<int> g[32005];
queue<int> q,ans;
int main(){
    scanf("%d %d",&n,&m);
    int a,b;
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        degreee[b]++;
    }
    for(int i=1;i<=n;i++)
        if(degreee[i]==0)
            q.push(i);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        ans.push(temp);
        for(int i=0;i<g[temp].size();i++){
            int node=g[temp][i];
            degreee[node]--;
            if(degreee[node]==0)
            q.push(node);
        }
    }
    while(!ans.empty()){
        printf("%d ",ans.front());
        ans.pop();
    }
}