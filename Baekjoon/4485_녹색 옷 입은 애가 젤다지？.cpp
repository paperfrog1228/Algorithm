#include<stdio.h>
struct Pos{int x;int y;int r;};
Pos q[10000000],dir[4]={{0,1},{1,0},{0,-1},{-1,0}};
int N,n,map[150][150],dp[150][150];
int startX,startY,count;
void Init(){
    N++;
    startX=1,startY=1,count=0;
    for(int i=0;i<=n+2;i++)
    for(int j=0;j<=n+2;j++)
    dp[i][j]=999999999;
    for(int i=0;i<=n+2;i++)
    q[i]={0,0,0};
}
void Push(int x,int y,int r){
    q[count].r=r;
    q[count].x=x;
    q[count].y=y;
    int now=count;
    int parent=(now-1)/2;
    count++;
    while(now>0&&q[now].r<q[parent].r){
        Pos temp=q[now];
        q[now]=q[parent];
        q[parent]=temp;
        now=parent;
        parent=(now-1)/2;
    }
}
Pos Pop(){
    Pos ret=q[0];
    q[0]=q[--count];
    int now=0,left=1,right=2;
    int target=now;
    while(left<=count){
        if(q[target].r>q[left].r)
            target=left;
        if(q[target].r>q[right].r&&right<=count)
            target=right;
        if(target==now)
            break;
        Pos temp=q[target];
        q[target]=q[now];
        q[now]=temp;
        now=target;
        left=now*2+1;
        right=now*2+2;
    }
    return ret;
}
void Check(){
    while(1){
        Pos now=Pop();
        if(now.x==n&&now.y==n){
            printf("Problem %d: %d\n",N,now.r);
            break;
        }
        for(int i=0;i<4;i++){
            int nx=now.x+dir[i].x;
            int ny=now.y+dir[i].y;
            int nr=now.r+map[nx][ny];
            if(nx<=0||ny<=0||nx>n||ny>n)
                continue;
            if(dp[nx][ny]<=nr)
                continue;
            dp[nx][ny]=nr;
            Push(nx,ny,nr);
        }
    }
}
int main(){
    while(1){
    scanf("%d",&n);
    if(n==0)
    return 0;
    Init();
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&map[i][j]);
    dp[1][1]=map[1][1];
    Push(1,1,map[1][1]);
    Check();
    }
}