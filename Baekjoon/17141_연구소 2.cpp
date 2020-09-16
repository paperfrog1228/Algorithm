#include<stdio.h>
#include<queue>
#define INF 999999999
#define FOR for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
struct Pos{int x;int y;};
std::vector<Pos> virus;
int n,m,map[52][52],v[52][52],ans=INF;
Pos dir[4]={{0,1},{0,-1},{1,0},{-1,0}};
int BFS(int map[][52]){
  std::queue<Pos> q;
  int tmap[52][52],v[52][52];
  FOR
  v[i][j]=0,tmap[i][j]=map[i][j];
  FOR
  if(tmap[i][j]==3)
  q.push({i,j}),v[i][j]++;
  int cnt;
  while(!q.empty()){
    Pos now=q.front();
    q.pop();
    cnt=v[now.x][now.y];
    for(int i=0;i<4;i++){
      int nx=now.x+dir[i].x,ny=now.y+dir[i].y;
      if(nx<1||ny<1||nx>n||ny>n||v[nx][ny]||map[nx][ny]==1)
        continue;
      v[nx][ny]=cnt+1; 
      tmap[nx][ny]=3;
      q.push({nx,ny});
    }
  }
  FOR if(tmap[i][j]==0)
  return INF;
  return cnt-1; 
}
void DFS(int index,int cnt){
  if(cnt==m){
  int tmp=BFS(map);
  if(ans>tmp)
    ans=tmp;
    return;
  }
  for(int i=index+1;i<virus.size();i++){
      map[virus[i].x][virus[i].y]=3;
      DFS(i,cnt+1);
      map[virus[i].x][virus[i].y]=0;
  }
}
int main(){
  scanf("%d %d",&n,&m);
  FOR{
    scanf("%d",&map[i][j]);
    if(map[i][j]==2)
    map[i][j]=0,virus.push_back({i,j});
  }
  for(int i=0;i<virus.size();i++){
      map[virus[i].x][virus[i].y]=3;
      DFS(i,1);
      map[virus[i].x][virus[i].y]=0;
  }
  if(ans==INF)
  ans=-1;
  printf("%d",ans);
}