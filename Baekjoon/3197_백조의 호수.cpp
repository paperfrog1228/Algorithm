#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
struct p{int x;int y;};
int r,c,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},visit[1550][1550],ans;
char lake[1550][1550];
p swan;
queue<p> waterQ,water_tempQ,swanQ,swan_tempQ;
bool BFS(){
    while(!swanQ.empty()){
        int x=swanQ.front().x;
        int y=swanQ.front().y;
        swanQ.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
        if(nx<0||ny<0||r<=nx||c<=ny)
            continue;
        if(visit[nx][ny])
            continue;
        visit[nx][ny]=1;
        if(lake[nx][ny]=='L')
            return true;
         p ice;
        ice.x=nx,ice.y=ny;
        if(lake[nx][ny]=='X'){
            swan_tempQ.push(ice);
            continue;
        }
        swanQ.push(ice);
        }
    }
    swap(swanQ,swan_tempQ);
    return false;
}
int main(){
    int nx,ny;
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        scanf("%s",lake[i]);
        for(int j=0;j<c;j++){
            if(lake[i][j]!='X'){
                p water;
                water.x=i,water.y=j;
                waterQ.push(water);
            }
            if(lake[i][j]=='L')
                swan.x=i,swan.y=j;
            }
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            visit[i][j]=0;
    swanQ.push(swan);
    visit[swan.x][swan.y]=1;
    while(true){
        if(BFS()){
            printf("%d",ans);
            return 0;
        }
        while(!waterQ.empty()){
            p temp=waterQ.front();
            int x=temp.x;
            int y=temp.y;
            waterQ.pop();
            for(int k=0;k<4;k++){
                nx=temp.x+dx[k],ny=temp.y+dy[k];
                if(nx<0||ny<0||r<=nx||c<=ny)
                    continue;
                if(lake[nx][ny]=='X'){
                    p water;
                    water.x=nx,water.y=ny;
                    lake[nx][ny]='.';
                    water_tempQ.push(water);
                }
            }
        }
        swap(waterQ,water_tempQ);
        ans++;
    }
}
