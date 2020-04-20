#include<stdio.h>
#include<queue>
using namespace std;
char map[14][8];
int visit[14][8];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue<int> qx,qy;
bool flag=false;
void Check(){
    if(qx.size()<4){
        queue<int> tx,ty;
        swap(qx,tx);
        swap(qy,ty);
        return;
    }
    flag=true;
    while(!qx.empty()){
        map[qx.front()][qy.front()]='.';
        qx.pop();
        qy.pop();
    }
}
void Down(int x,int y){
    int nx=x+1;
    char tmp=map[x][y];
    while(map[nx][y]=='.')
        nx++;
    map[x][y]='.';
    map[nx-1][y]=tmp;
}
void DFS(int x,int y,char color){
    qx.push(x),qy.push(y); 
    visit[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0||ny<0||nx>11||ny>5)
            continue;
        if(map[nx][ny]!=color||visit[nx][ny])
            continue;
        DFS(nx,ny,color);
    }
}
int main(){
    for(int i=0;i<12;i++)
    scanf("%s",map[i]);
    int ans=0;
    while(1){
        for(int i=0;i<12;i++)
        for(int j=0;j<6;j++)
        visit[i][j]=0;
        flag=false;
        for(int i=0;i<12;i++)
        for(int j=0;j<6;j++)
        if(map[i][j]!='.'&&visit[i][j]==0){
            DFS(i,j,map[i][j]);  
            Check();
        }
        for(int i=11;i>=0;i--)
        for(int j=0;j<6;j++)
        Down(i,j);
        if(!flag)
        break;
        ans++;
    }
    printf("%d",ans);
}