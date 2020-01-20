#include<stdio.h>
#include <queue>
#define MAX 1000
using namespace std;
struct Chicken{
int x;
int y;
bool crash;
int count;
};
int n,m,arr[MAX+2][MAX+2],ans=-1;
bool visit[MAX+1][MAX+1][2];//0이 벽 안부순거,1이 부순거
queue<Chicken> q;
void Check(Chicken a){
    if(arr[a.x][a.y]==-1)
    return;
    if(a.crash&&visit[a.x][a.y][1])
    return;
    if(!a.crash&&visit[a.x][a.y][0])
    return;
    if(arr[a.x][a.y]==1){
        if(visit[a.x][a.y][1])
        return;
        if(!a.crash){
            a.crash=true;
            a.count++;
            visit[a.x][a.y][1]=true;
            q.push(a);
        }
        else return;
    }
    a.count++;
    if(a.x==n&&a.y==m){
    ans=a.count;
    return;
    }
    if(a.crash)
    visit[a.x][a.y][1]=true;
    else
    visit[a.x][a.y][0]=true;
    q.push(a);
}
void BFS(){
    while(!q.empty()&&ans==-1){
    Chicken a=q.front();
    q.pop();
    int x=a.x;
    int y=a.y;
    a.x=x+1;
    Check(a);
    a.x=x-1;
    Check(a);
    a.x=x;
    a.y=y+1;
    Check(a);
    a.y=y-1;
    Check(a);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++)
    for(int j=0;j<=m+1;j++)
    arr[i][j]=-1;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%1d",&arr[i][j]);
    Chicken a;
    a.x=1,a.y=1,a.crash=false,a.count=0;
    Check(a);
    BFS();
    printf("%d",ans);
    return 0;
}