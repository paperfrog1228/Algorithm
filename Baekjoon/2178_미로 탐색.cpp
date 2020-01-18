#include<stdio.h>
#include <queue>
#define MAX 100
using namespace std;
int arr[MAX+2][MAX+2],n,m;
bool visit[MAX+2][MAX+2];
queue<int> qx,qy,qCount;
void Check(int a,int b,int count){
    if(arr[a][b]!=1||visit[a][b])
        return;
    count+=1;
    qx.push(a);
    qy.push(b);
    qCount.push(count);
    visit[a][b]=true;
          
}
int BFS(){
    Check(1,1,0);
    while(!qx.empty()&&!qy.empty()){
    int x=qx.front();
    int y=qy.front();
    int count=qCount.front();
    qx.pop();
    qy.pop();
    qCount.pop();
    if(x==n&&y==m)
    return count;
    Check(x+1,y,count);//오
    Check(x-1,y,count);//왼
    Check(x,y+1,count);//위
    Check(x,y-1,count);//밑
    }
    return 0;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++)
    for(int j=0;j<=m+1;j++)
        arr[i][j]=-1;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        scanf("%1d",&arr[i][j]);
    printf("%d",BFS());
    return 0;
}
