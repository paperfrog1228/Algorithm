#include<iostream>
#include<memory.h>
#include<algorithm>
#include<queue>
int n,ans[1010],vis[1010][1010];
using namespace std;
struct emoji{int now;int cnt;int paste;};
queue<emoji> q;
int main(){
    q.push({1,0,-1});
    scanf("%d",&n);
    for(int i=1;i<=n;i++) ans[i]=100;
    while(!q.empty()){
        emoji p=q.front();  q.pop();
        if(p.now>n||p.now<1) continue;
        if(vis[p.now][p.paste]) continue;
            vis[p.now][p.paste]++;
        if(p.cnt<ans[p.now]) ans[p.now]=p.cnt;
        q.push({p.now-1,p.cnt+1,p.paste});
        if(p.paste!=-1) q.push({p.now+p.paste,p.cnt+1,p.paste});
        q.push({p.now,p.cnt+1,p.now});
    } 
    printf("%d",ans[n]);
}
