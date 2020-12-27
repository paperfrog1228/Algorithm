#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
struct node{int dist;int t;};
struct cmp {
	bool operator()(node &a, node &b) {
		return a.dist > b.dist;
	}
};
int n,m,d[20005],mmax,ans,cnt;
vector<vector<int>> map;
priority_queue<node,vector<node>,cmp> pq;
int main(){
  scanf("%d %d",&n,&m);
  map.resize(n+2);
  for(int i=2;i<=n;i++)
    d[i]=987654321;
  int a,b;
  for(int i=1;i<=m;i++){
    scanf("%d %d",&a,&b);
    map[a].push_back(b);
    map[b].push_back(a);
  }
  pq.push({0,1});
  while(!pq.empty()){
    int cur=pq.top().t;
    int cdist=pq.top().dist;
    pq.pop();
    for(int i=0;i<map[cur].size();i++){
      int next=map[cur][i];
      if(d[next]>cdist+1) {
        d[next]=cdist+1;
        pq.push({cdist+1,next});
      }
    }
  }
  for(int i=1;i<=n;i++)
    if(mmax<d[i]) mmax=d[i];
  for(int i=2;i<=n;i++){
    if(d[i]==mmax){
      if(ans==0) ans=i;
      cnt++;
    }
  }
  printf("%d %d %d",ans,mmax,cnt);
}