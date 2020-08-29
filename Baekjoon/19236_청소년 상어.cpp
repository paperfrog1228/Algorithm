#include <stdio.h>
struct P{int x;int y;};
P dir[9]={{0,0},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
P s={2,3};
int sd,ans;
struct F{int num; int dir_num;};
F map[5][5];
void FishMove(int x,int y,F (*m)[5]){
    for(int i=1;i<=16;i++){
        P pos={0,0};
        int d=0;
        for(int j=1;j<=4;j++)
        for(int k=1;k<=4;k++)
        if(m[j][k].num==i)
            pos={j,k},d=m[j][k].dir_num;
        if(d==0)
            continue;
        int nd;
        for(int j=0;j<8;j++){
            nd=(j+d)%8;
            if(nd==0)
                nd=8;
            int nx=pos.x+dir[nd].x,ny=pos.y+dir[nd].y;
            if(nx<1||ny<1||nx>4||ny>4)
                continue;
            if(nx==x&&ny==y)
                continue;
            F temp=m[nx][ny];
            m[nx][ny]=m[pos.x][pos.y];
            m[pos.x][pos.y]=temp;
            m[nx][ny].dir_num=nd;
            break;
        }
    }  
}
void DFS(int x,int y,int sd,F m[][5],int cnt){
    F tm[5][5];
    for(int i=1;i<=4;i++)
    for(int j=1;j<=4;j++)
        tm[i][j]=m[i][j];
    cnt+=tm[x][y].num;
    sd=tm[x][y].dir_num;
    tm[x][y].num=0;
    FishMove(x,y,tm);
    int nx=x,ny=y;
    for(int i=0;i<4;i++){
        nx+=dir[sd].x,ny+=dir[sd].y;
        if(nx<1||ny<1||nx>4||ny>4)
            break;
        if(tm[nx][ny].num==0)
            continue;
        DFS(nx,ny,sd,tm,cnt);
    }
    if(ans<cnt)
    ans=cnt;
}
int main(){
    for(int j=1;j<=4;j++)
    for(int i=1;i<=4;i++)
    scanf("%d %d",&map[i][j].num,&map[i][j].dir_num);
    DFS(1,1,0,map,0);
    printf("%d",ans);
}