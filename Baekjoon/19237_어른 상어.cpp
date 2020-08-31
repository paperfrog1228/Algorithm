#include<stdio.h>
#include<queue>
struct Pos{int x;int y;};
struct Shark{int d_num;int priority[5][5];};
struct Map{int shark;int smell;int whoSmell;};
std::queue<Pos> update;
int n,m,k,cnt;
Map map[22][22],tmap[22][22];
Shark s[404];
Pos d[5]={{0,0},{0,-1},{0,1},{-1,0},{1,0}};
void SharkMove(int x,int y){
    int num=map[x][y].shark,d_num=s[num].d_num;
    int nx,ny,j;
    for(int i=1;i<=8;i++){
        j=i%4;
        if(j==0) j=4;
        nx=x+d[s[num].priority[d_num][j]].x;
        ny=y+d[s[num].priority[d_num][j]].y;//tlqkf..
        if(nx<=0||ny<=0||nx>n||ny>n)
            continue;
        int nnum=tmap[nx][ny].shark;
        if(i<=4){
            if(map[nx][ny].smell>0)
                continue;
            if((0<nnum&&num<nnum)||nnum==0) 
                break;
            if(0<=nnum&&num>nnum)
                return;
            
        }
        else{
            if(map[nx][ny].whoSmell==num)
                break;
        }
    }
    s[num].d_num=s[num].priority[d_num][j];
    tmap[nx][ny].shark=num;
    tmap[nx][ny].smell=k;
    tmap[nx][ny].whoSmell=num;
    update.push({nx,ny});
}
void Move(){
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        if(map[i][j].shark>0){
            SharkMove(i,j);
            map[i][j].shark=0;
        }
    while(!update.empty()){
        Pos pos=update.front();
        update.pop();
        map[pos.x][pos.y]=tmap[pos.x][pos.y];
    }
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(map[i][j].shark==0&&map[i][j].smell>0)
            map[i][j].smell--;
        if(map[i][j].smell==0)
        map[i][j].whoSmell=0;
        tmap[i][j]={0,0,0};
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int j=1;j<=n;j++)
    for(int i=1;i<=n;i++){
        scanf("%d",&map[i][j].shark);
        if(map[i][j].shark>0){
        map[i][j].smell=k;
        map[i][j].whoSmell=map[i][j].shark;
        }
    }
    for(int i=1;i<=m;i++)
    scanf("%d",&s[i].d_num);
    for(int i=1;i<=m;i++)
    for(int j=1;j<=4;j++)
    for(int k=1;k<=4;k++)
    scanf("%d",&s[i].priority[j][k]);
    bool end;
    while(1){
        if(cnt>1000){
            printf("-1");
            return 0;
        }
        end=true;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(map[i][j].shark>1)
            end=false;
        if(end) break;
        Move();
        cnt++;    
    }
    printf("%d",cnt);
}