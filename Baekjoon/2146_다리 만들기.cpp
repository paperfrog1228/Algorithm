#include<stdio.h>
#include<queue>
using namespace std;
struct d{int x;int y;};
d dir[4]={0,1,0,-1,1,0,-1,0},start,end;
int n,arr[110][110],visitBFS[110][110],visitDFS[110][110],visit[110][110],ans=300;
queue<d> q;
bool DFS(int x,int y){
    if(x==start.x&&y==start.y)
            return true;
    for(int i=0;i<4;i++){
        int nx=x+dir[i].x;
        int ny=y+dir[i].y;
        if(arr[nx][ny]!=1||visitDFS[nx][ny])
            continue;
        visitDFS[nx][ny]=1;
        if(nx==start.x&&ny==start.y)
            return true;
        if(DFS(nx,ny))
            return true;
    }
    return false;
}
void BFS(){
    while(!q.empty()){
        d temp=q.front();
        int cnt=visitBFS[temp.x][temp.y];
        q.pop();
        for(int i=0;i<4;i++){
            int nx=temp.x+dir[i].x;
            int ny=temp.y+dir[i].y;
            if(arr[nx][ny]==-1||visitBFS[nx][ny])
                continue;
            visitBFS[nx][ny]=cnt+1;
            if(arr[nx][ny]==0){
                d s;s.x=nx;s.y=ny;
                q.push(s);
                continue;
            }
            if(ans<=visitBFS[nx][ny])
                continue;
            visitDFS[nx][ny]=1;
            if(!DFS(nx,ny))
            ans=visitBFS[nx][ny];
            for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                visitDFS[i][j]=0;
        }
    }
}
int main(){
    for(int i=0;i<=105;i++)
    for(int j=0;j<=105;j++)
        arr[i][j]=-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&arr[i][j]);
    
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(arr[i][j]==1){
            for(int k=0;k<4;k++){
                int nx=i+dir[k].x;
                int ny=j+dir[k].y;
                if(visit[nx][ny])
                    continue;
                visit[nx][ny]=1;
                if(arr[nx][ny]==0)
                {
                    start.x=i,start.y=j;
                    d s;s.x=nx;s.y=ny;
                    q.push(s);
                    visitBFS[nx][ny]=1;
                    BFS();
                   for(int i=1;i<=n;i++)
                   for(int j=1;j<=n;j++)
                    visitBFS[i][j]=0;
                }
            }
        }
    }
    printf("%d",ans-1);
}