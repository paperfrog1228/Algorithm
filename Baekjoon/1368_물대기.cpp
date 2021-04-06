#include<stdio.h>
#include<algorithm>
#include<vector>
struct e{int w;int x;int y;};
using namespace std;
int n,a[304],p[304],w,ans;
vector<e> v;
bool cmp(const e &a, const e &b){
    if (a.w < b.w) return true; 
    return false;
}
int Find(int x){
   if(p[x]==x) return x;
   return Find(p[x]);
}
void Union(int u,int v){
    int x=Find(u),y=Find(v);
    if(x!=y) p[x]=y;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) p[i]=i;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),v.push_back({a[i],i,0});
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            scanf("%d",&w);
            if(i==j) continue;
            v.push_back({w,i,j});
        }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        if(Find(v[i].x)==Find(v[i].y)) continue;
        ans+=v[i].w;
        Union(v[i].x,v[i].y);
    }
    printf("%d",ans);
}
