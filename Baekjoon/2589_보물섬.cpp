#include<stdio.h>
#include <string>
#include<queue>
using namespace std;
struct D{int x;int y;};
int n,m,visit[52][52],ans=-1;
char arr[52][52];
D direction[4]={{1,0},{-1,0},{0,1},{0,-1}};
queue<D> q;
void Check(int x,int y,int count){
    if(x<0||y<0)
    return;
    if(arr[x][y]!='L'||visit[x][y])
    return;
    visit[x][y]=++count;
    if(ans<visit[x][y])
        ans=visit[x][y];
    D d;
    d.x=x,d.y=y;
    q.push(d);
}
void BFS(){
    while(!q.empty()){
        D d=q.front();
        q.pop();
        int count=visit[d.x][d.y];
        for(int i=0;i<=3;i++)
        Check(d.x+direction[i].x,d.y+direction[i].y,count);}
    
}
int main(){
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    scanf("%s",arr[i]);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    if(arr[i][j]=='L'){
        D d;
        d.x=i,d.y=j;
        q.push(d);
        BFS();
        for(int k=0;k<m;k++)
        for(int l=0;l<n;l++)
        visit[k][l]=0;
    }
    printf("%d\n",ans);
}