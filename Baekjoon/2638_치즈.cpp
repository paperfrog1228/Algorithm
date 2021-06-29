#include<bits/stdc++.h>
using namespace std;
struct pos{int x;int y;};
int n,m,mp[110][110],vis[110][110],ans;
queue<pos> q1,q2,q3;
vector<pos> v;
pos d[4]={{0,1},{1,0},{-1,0},{0,-1}};
void air(pos p){
    if(p.x<1||p.y<1||p.x>n||p.y>m) return;
    if(vis[p.x][p.y]) return;
    if(mp[p.x][p.y]==1){
        q3.push({p.x,p.y});
        return;
    }
    if(mp[p.x][p.y]!=0) return;
    mp[p.x][p.y]=3;
    for(int i=0;i<4;i++)
        air({p.x+d[i].x,p.y+d[i].y});
}
bool check(pos p){
    int ret=0;
    for(int i=0;i<4;i++){
        int nx=p.x+d[i].x;
        int ny=p.y+d[i].y;
        if(nx<1||ny<1||nx>n||ny>m) continue;
        if(mp[nx][ny]==3) ret++;
    }
    if(ret>=2) return true;
    return false;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&mp[i][j]);
    for(int i=1;i<=n;i++) air({1,1});
    for(int i=1;i<=m;i++) air({1,i});
    for(int i=1;i<=n;i++) air({i,m});
    for(int i=1;i<=m;i++) air({n,i});
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    if(mp[i][j]!=1) continue;
    else if(check({i,j})) q1.push({i,j}),vis[i][j]++;
    while(!q1.empty()){
        ans++;
        while(!q1.empty()){
            pos now=q1.front(); q1.pop();
            for(int i=0;i<4;i++){
                int nx=now.x+d[i].x;
                int ny=now.y+d[i].y;
                if(nx<1||ny<1||nx>n||ny>m) continue;
                if(mp[nx][ny]==0) air({nx,ny});
                if(vis[nx][ny]||mp[nx][ny]!=1) continue;
                q2.push({nx,ny});
            }
            mp[now.x][now.y]=3;
        }
        while(!q2.empty()){
            pos p=q2.front();q2.pop();
            if(vis[p.x][p.y]) continue;
            if(check(p)) q1.push(p),vis[p.x][p.y]++;
        }
        while(!q3.empty()){
            pos p=q3.front();q3.pop();
            if(vis[p.x][p.y]) continue;
            if(check(p)) q1.push(p),vis[p.x][p.y]++;
        }
    }
    printf("%d",ans);
}
