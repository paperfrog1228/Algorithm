#include<stdio.h>
#include<queue>
using namespace std;
struct XY{int x,y;};
int t,l,visit[302][302];
queue<XY> q; 
XY k,n,d[8]={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
int Check(int x,int y,int count){
    if(l<=x||l<=y||x<0||y<0||visit[x][y])
        return 0;
    visit[x][y]=++count;
    if(x==n.x&&y==n.y)
        return visit[x][y];
    XY xy={x,y};
    q.push(xy);
    return 0;
}
int BFS(){
    while(!q.empty()){
        int x=q.front().x;
        int y=q.front().y;
        q.pop();
        int cnt=visit[x][y];
        for(int i=0;i<8;i++){
            int ans=Check(x+d[i].x,y+d[i].y,cnt);
            if(ans)
            return ans;
        }
    }
    return 0;
}
void Test(){
    queue<XY> empty;
    swap(q,empty);
    for(int i=0;i<=l;i++)
    for(int j=0;j<=l;j++)
        visit[i][j]=0;
    scanf("%d %d %d %d %d",&l,&k.x,&k.y,&n.x,&n.y);
    if(k.x==n.x&&k.y==n.y){
        printf("0\n");
        return;
    }
    q.push(k);
    printf("%d\n",BFS());
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Test();
}