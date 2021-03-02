#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int n,m,cnt,degree[1004],a;
vector<int> v[1004],ans;
queue<int> q;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&cnt);
        int temp=0;
        for(int j=0;j<cnt;j++){
            scanf("%d",&a);
            if(temp!=0) v[temp].push_back(a),
            degree[a]++;
            temp=a;
        }
    }
    for(int i=1;i<=n;i++) if(degree[i]==0) q.push(i);
    while(!q.empty()){
        int now=q.front();
        q.pop();
        ans.push_back(now);
        for(int i=0;i<v[now].size();i++){
            int node=v[now][i];
            degree[node]--;
            if(degree[node]==0)
            q.push(node);
        }
    }
    if(ans.size()!=n){ printf("0"); return 0 ; }
    for(int i=0;i<ans.size();i++) printf("%d\n",ans[i]);
}