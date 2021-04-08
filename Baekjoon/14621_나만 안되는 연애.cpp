#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace  std;
int n,m,a,b,w,p[1004],ans;
char sex[1004];
vector<pair<int,pair<int,int>>> v;
int find(int a){
    if(p[a]==a) return a;
    return find(p[a]);
}
void merge(int a,int b){
    int aa=find(a);int bb=find(b);
    if(aa!=bb) p[aa]=bb;
}
bool isUnion(int a,int b){
    if(find(a)==find(b)) return  true;
    else return false;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf(" %1c",&sex[i]),p[i]=i;
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&w);
        if(sex[a]==sex[b]) continue;
        v.push_back({w,{a,b}});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int x=v[i].second.first;
        int y=v[i].second.second;
        if(find(x)==find(y)) continue;
        ans+=v[i].first;
        merge(x,y);
    }
    for(int i=1;i<=n;i++){
       if(!isUnion(1,i)){
           printf("-1");
           return 0;
       }
    }
    printf("%d",ans);
}