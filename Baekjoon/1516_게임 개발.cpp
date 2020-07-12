#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
struct Build{int n;int time;};
int n,a,degree[505],time[505],ans[505];
vector<int> v[505];
queue<Build> q;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        time[i]=a;
        while(1){
            scanf("%d",&a);
            if(a==-1) break;
            v[a].push_back(i);
            degree[i]++;
        }
        if(degree[i]==0){
            ans[i]=time[i];
            q.push({i,time[i]});
        }
    }
    while(!q.empty()){
        Build now=q.front();
        q.pop();
        for(int i=0;i<v[now.n].size();i++){
            degree[v[now.n][i]]--;
            if(ans[v[now.n][i]]<time[v[now.n][i]]+now.time)
            ans[v[now.n][i]]=time[v[now.n][i]]+now.time;
            if(degree[v[now.n][i]]==0)
            q.push({v[now.n][i],ans[v[now.n][i]]});
        }
    }
    for(int i=1;i<=n;i++)
    printf("%d\n",ans[i]);
}