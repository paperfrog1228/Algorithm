#include <bits/stdc++.h>
using namespace std;
struct p{int x;int y;};
int n,m,mp[1010][1010],vis[1010][1010];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue<p> q;
int main(){
    memset(vis,-1,sizeof(vis));
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf("%d",&mp[i][j]);
        if(mp[i][j]==2) q.push({i,j}),vis[i][j]=0;
    }
    while(!q.empty()){
        p now=q.front();q.pop();
        int cnt=vis[now.x][now.y];
        for(int i=0;i<4;i++){
            int nx=now.x+dx[i];
            int ny=now.y+dy[i];
            if(nx<=0||ny<=0||nx>n||ny>m)
                continue;
            if(vis[nx][ny]!=-1||mp[nx][ny]==0) continue;
            vis[nx][ny]=cnt+1;
            q.push({nx,ny});
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(mp[i][j]==0) printf("%d ",mp[i][j]);
            else printf("%d ",vis[i][j]);
        }
        printf("\n");
    }
}
