#include<iostream>
#include<vector>
using namespace std;
struct Dir{int x;int y;};
Dir d[4]={{1,0},{0,-1},{-1,0},{0,1}};
vector<int> v[6]={{},{0},{0,2},{0,1},{0,1,2},{0,1,2,3}};
vector<Dir> c;
int n,m,map[10][10],ans=9999;
int GetCount(int tm[][10]){
    int cnt=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    if(tm[i][j]==0) cnt++;
    return cnt;
}
int GetDir(int a,int b){
    int ret=a-b;
    if(ret<0) ret+=4;
    return ret;
}
void DFS(int ci,int di,int am[][10]){
    if(di>3) return;
    int cx=c[ci].x,cy=c[ci].y,ca=map[cx][cy];
    int tm[10][10];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        tm[i][j]=am[i][j];
    for(int i=0;i<v[ca].size();i++){
        int dindex=GetDir(v[ca][i],di);
            Dir dir=d[dindex];
            int nx=cx,ny=cy;
        while(1){
            if(nx<1||ny<1||nx>n||ny>m||tm[nx][ny]==6)
                break;
            if(tm[nx][ny]==0)
                tm[nx][ny]=9;
            nx+=dir.x,ny+=dir.y;
        }
    }
    if(ci==c.size()){
        int cnt=GetCount(tm);
        if(ans>cnt) ans=cnt;
        return;
    }
    DFS(ci,di+1,am);
    DFS(ci+1,0,tm);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf("%d",&map[i][j]);
        if(0<map[i][j]&&map[i][j]<6)
        c.push_back({i,j});
    }
    if(c.size()==0) ans=GetCount(map);
    else DFS(0,0,map);
    printf("%d",ans);
}