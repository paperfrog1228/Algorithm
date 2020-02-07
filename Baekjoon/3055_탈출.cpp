#include<stdio.h>
#include<queue>
#include <cstring>
using namespace std;
#define FOR(i,n) for(int i=0;i<=n-1;i++)
int r,c,visit[52][52],water_visit[52][52],dirx[4]={-1,1,0,0},diry[4]={0,0,1,-1},ans=0;
char forest[52][52];
bool flag;
queue<int> queue_x,queue_y,//고슴도치다
           water_x,water_y;
void Flood(int x,int y){
    if(water_visit[x][y]==0){
        water_visit[x][y]++;
        if(forest[x][y]=='.'){
        forest[x][y]='*';
        water_x.push(x),water_y.push(y);
       }
    }
};
int Move(int x,int y,int count){
    if(visit[x][y]>0)
        return 0;
    visit[x][y]=count+1;
    if(forest[x][y]=='.')
        queue_x.push(x),queue_y.push(y);
    if(forest[x][y]=='D'){
        flag=true;
            return 1;
    }
    return 0;
}
void BFS(){
    while(!queue_x.empty()){
        int size=water_x.size();
        for(int j=1;j<=size;j++){
            int wx=water_x.front();
            int wy=water_y.front();
            water_x.pop(),water_y.pop();
            for(int i=0;i<4;i++){
                if(wx+dirx[i]>=0&&wy+diry[i]>=0){
                    Flood(wx+dirx[i],wy+diry[i]);
                }
            }
        }
        size=queue_x.size();
        for(int j=1;j<=size;j++){
            int x=queue_x.front();int y=queue_y.front();
            queue_x.pop(),queue_y.pop();
            int count=visit[x][y];
            for(int i=0;i<4;i++){
            if(0<=x+dirx[i]&&0<=y+diry[i])
                if(Move(x+dirx[i],y+diry[i],count)>0){
                    ans=count;
                    return;
                }
            }
        }
    }
}
int main(){
    scanf("%d %d",&r,&c);
    FOR(i,r){
        scanf("%s",forest[i]);
        FOR(j,c){
            if(forest[i][j]=='S')
                queue_x.push(i),queue_y.push(j);
            if(forest[i][j]=='*')
                water_x.push(i),water_y.push(j);
        }
    }
    BFS();
    if(flag)
    printf("%d\n",ans+1);
    else
    printf("KAKTUS\n");
} 