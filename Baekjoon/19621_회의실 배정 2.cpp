#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct m{int s;int e;int p;};
vector<m> v;
int n,ans;
void dfs(int cur,int cnt){
    cnt+=v[cur].p;
    for(int i=cur+2;i<n;i++)
        dfs(i,cnt);
    if(ans<cnt) ans=cnt;
}
int main(){
    scanf("%d",&n);
    v.resize(n);
    for(int i=0;i<n;i++) scanf("%d %d %d",&v[i].s,&v[i].e,&v[i].p);
    for(int i=0;i<n;i++) dfs(i,0);
    printf("%d",ans);
}