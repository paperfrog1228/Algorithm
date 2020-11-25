#include<stdio.h>
#include<vector>
struct node{int t; int w;};
std::vector<node> tree[100004];
int n,s,t,w,v[100004],max,maxi;
void dfs(int n,int w){
  v[n]++;
  if(max<w)
    max=w,maxi=n;
  for(int i=0;i<tree[n].size();i++){
    if(!v[tree[n][i].t])
      dfs(tree[n][i].t,w+tree[n][i].w);
  }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      scanf("%d",&s);
      while(1){
        scanf("%d",&t);
        if(t==-1) break;
        scanf("%d",&w);
        tree[s].push_back({t,w});
        tree[t].push_back({s,w});
      }
    }
    dfs(1,0);
    for(int i=1;i<=n;i++) v[i]=0;
    max=0;
    dfs(maxi,0);
    printf("%d",max);
}