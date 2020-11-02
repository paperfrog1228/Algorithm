#include<stdio.h>
#include<vector>
#include<queue>
struct p{int x;int y;int c;};
struct cmp{
    bool operator()(p &a,p &b){
        return a.c>b.c;
    }
};
std::priority_queue<p,std::vector<p>,cmp> q;
int n,map[55][55],v[55][55],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},ans=9999;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%1d",&map[i][j]);
    q.push({1,1,0});
    while(!q.empty()){
        p cur=q.top();
        q.pop();
        v[cur.x][cur.y]++;
        if(ans<=cur.c) continue;
        if(cur.x==n&&cur.y==n){
            if(ans>cur.c)
                ans=cur.c;
            v[cur.x][cur.y]=0;
            continue;
        }
        for(int i=0;i<4;i++){
            int nx=cur.x+dx[i],ny=cur.y+dy[i];
            if(nx<1||ny<1||nx>n||ny>n||v[nx][ny])
                continue;
            if(map[nx][ny]==0)
            q.push({nx,ny,cur.c+1});
            else
            q.push({nx,ny,cur.c});
        }
    }
    printf("%d",ans);
} 