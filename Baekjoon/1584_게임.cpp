#include<bits/stdc++.h>
using namespace std;
struct state{int x;int y;int hp;};
struct compare {
	bool operator()(const state& s1, const state& s2) {return s1.hp > s2.hp;}
};
priority_queue<state, vector<state>, compare> pq;
int n,m,x,y,x2,y2,mp[550][550],vis[550][550];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(){
    memset(vis,-1,sizeof(vis));
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d %d",&x,&y,&x2,&y2);
        int sx=min(x,x2),sy=min(y,y2);
        int tx=max(x,x2),ty=max(y,y2);        
        for(int i=sx;i<=tx;i++)
        for(int j=sy;j<=ty;j++) mp[i][j]=1;
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d %d %d %d",&x,&y,&x2,&y2);
        int sx=min(x,x2),sy=min(y,y2);
        int tx=max(x,x2),ty=max(y,y2);      
        for(int i=sx;i<=tx;i++)
        for(int j=sy;j<=ty;j++) mp[i][j]=2;
    }
    mp[0][0]=0;
    pq.push({0,0,0});
    while(!pq.empty()){
        state now=pq.top(); pq.pop();
        if(now.x==500&&now.y==500){
            printf("%d",now.hp);
            return 0;
        }
        for(int i=0;i<4;i++){
            int cnt=now.hp;
            int nx=now.x+dx[i];
            int ny=now.y+dy[i];
            if(nx<0||ny<0||nx>500||ny>500||mp[nx][ny]==2) continue;
            if(mp[nx][ny]==1) cnt++;
            if(vis[nx][ny]!=-1&&vis[nx][ny]<=cnt) continue;
            vis[nx][ny]=cnt;
            pq.push({nx,ny,cnt});
        }
    }
    printf("-1");
}
