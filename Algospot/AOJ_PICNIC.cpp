#include <stdio.h>
#include <vector>
using namespace std;
int c,n,m,ans,vi[11];
vector<pair<int,int>> v;
void rec(int i,int cnt){
    if(vi[v[i].first]||vi[v[i].second]) return;
    if(cnt==n) {
        ans++;
        return;
    }
    vi[v[i].first]++;
    vi[v[i].second]++;
    for(int j=i+1;j<v.size();j++)
        rec(j,cnt+2);
    vi[v[i].first]=0;
    vi[v[i].second]=0;
}
int main(){
    scanf("%d",&c);
    while(c>0){
        v.clear();ans=0;
        for(int i=0;i<=10;i++)
        vi[i]=0;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=m;i++){
            int tmp1,tmp2;
            scanf("%d %d",&tmp1,&tmp2);
            v.push_back({tmp1,tmp2});
        }
        for(int i=0;i<v.size();i++)
            rec(i,2);
        printf("%d\n",ans);
        c--;
    }
}