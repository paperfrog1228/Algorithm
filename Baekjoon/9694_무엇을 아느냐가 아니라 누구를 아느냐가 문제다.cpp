#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
int t,n,m,x,y,z,c;
void f(){
    vector<int> v[22];
    vector<int> ans;
    int h[22][22],vis[22],trace[22];
    for(int i=0;i<=20;i++)
    for(int j=0;j<=20;j++)
        h[i][j]=0,vis[i]=987654321,trace[i]=-1;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d %d %d",&x,&y,&z),v[x].push_back(y),
        v[y].push_back(x),h[x][y]=z,h[y][x]=z;
    priority_queue<pair<int,int>> pq;
    pq.push({0,0});
    vis[0]=0;
    while(!pq.empty()){
        pair<int,int> now=pq.top(); pq.pop();
        int cost=-now.first; int u=now.second;
		if (cost>vis[u]) continue;
        if(now.second==m-1){
            printf("Case #%d: ",++c);
            int a=now.second;
            while(trace[a]!=-1) ans.push_back(a),a=trace[a];
            ans.push_back(a);
            reverse(ans.begin(),ans.end());
            for(auto a:ans)
            printf("%d ",a);
            printf("\n");
            return;
        }
        for(auto next:v[now.second]){
            int hh=h[u][next];
            if(vis[next]<cost+hh) continue;
            trace[next]=u;
            vis[next]=cost+hh;
            pq.push({now.first-hh,next});
        }
    }
    printf("Case #%d: -1\n",++c);
}
int main(){
    scanf("%d",&t);
    while(t--) f();
}