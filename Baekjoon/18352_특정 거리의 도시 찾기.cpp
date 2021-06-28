#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n,m,k,x,s,e,cnt,vis[300004];
vector<int> g[300004],ans;
queue<int> q1,q2;
int main() {
    scanf("%d %d %d %d",&n,&m,&k,&x);
    while(m--) scanf("%d %d",&s,&e),g[s].push_back(e);
    q1.push(x);
    vis[x]++;
    while(!q1.empty()){
        while(!q1.empty()){
            int now=q1.front(); q1.pop();
            if(cnt==k){
                ans.push_back(now);
                continue;
            }
            for(auto next:g[now])
                if(!vis[next]) q2.push(next),vis[next]++;
            }
        swap(q1,q2);
        cnt++;
    }
    sort(ans.begin(),ans.end());
    if(ans.size()==0) printf("-1");
    else for(auto n:ans) printf("%d\n",n);
}