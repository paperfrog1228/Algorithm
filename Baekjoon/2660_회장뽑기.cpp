#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int n,a,b,vis[55],mmin=987654321;
vector<int> g[55],ans[55];
int main(){
    scanf("%d",&n);
    while(1){
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
        if(a==-1) break;
    }
    printf("무야호!");
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++) vis[j]=0;
        int score=0,cnt=0;
        queue<int> q1,q2;
        q1.push(i);
        while(!q1.empty()){
            printf(" %d sex\n",i);
            if(mmin<score) break;
            while(!q1.empty()){
                int now=q1.front();
                q1.pop();
                for(int k=0;i<g[now].size();k++){
                    if(!vis[g[now][k]]);
                    q2.push(g[now][k]);
                    vis[g[now][k]]++;
                }
            }
            swap(q1,q2);
            score++;
        }
        if(score<=mmin) ans[score].push_back(i);
    }
    sort(ans[mmin].begin(),ans[mmin].end());
    printf("%d %d\n",mmin,ans[mmin].size());
    for(int i=0;i<ans[mmin].size();i++)
    printf("%d ",ans[mmin][i]);
}