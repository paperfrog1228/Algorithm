#include <stdio.h>
#include <vector>
using namespace std;
int n,t,d,visit[1005][9];
vector<int> v[1005],ans;
void dfs(int cur,int dep,vector<int> vec){
    vec.push_back(cur);
    visit[dep][cur]++;
    if(dep==n){
        ans=vec;
        return;
    }
    bool flag=false;
    for(int i=0;i<v[dep+1].size();i++){
        int now=v[dep+1][i];
        if(now==cur||visit[dep+1][now]) continue;
        dfs(v[dep+1][i],dep+1,vec);
        flag=true;
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        for(int j=1;j<=t;j++)
            scanf("%d",&d),v[i].push_back(d);
    }
    vector<int> tmp;
    for(int i=0;i<v[1].size();i++)
        dfs(v[1][i],1,tmp);
    if(ans.size()==0)
    printf("-1");
    else
    for(int i=0;i<ans.size();i++)
    printf("%d ",ans[i]);
}