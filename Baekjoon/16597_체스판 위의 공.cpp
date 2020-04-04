#include<stdio.h>
struct pos{int x;int y;};
int r,c,chess[505][505],ball[505][505],visit[505][505];
pos dp[505][505];
pos d[8]={{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1}};
pos end_pos;
void Move(int x,int y){
    visit[x][y]=1;
    bool is_move=false;
    int min=300001;
    pos min_d;
    for(int i=0;i<8;i++){
        int nx=x+d[i].x , ny=y+d[i].y;
        if(nx<1||ny<1||nx>r||ny>c)
            continue;
        if(chess[x][y]<chess[nx][ny])
            continue;
        if(chess[nx][ny]<min){
            is_move=true;
            min=chess[nx][ny];
            min_d=d[i];
        }
    }
    if(is_move){
        int nx=x+min_d.x , ny=y+min_d.y;
        if(visit[nx][ny])
            end_pos=dp[nx][ny];
        else 
            Move(nx,ny);
    }
    else
        end_pos.x=x,end_pos.y=y;
            
    dp[x][y]=end_pos;
    ball[end_pos.x][end_pos.y]++;
    ball[x][y]--;
}
int main(){
    scanf("%d %d",&r,&c);
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++){
        scanf("%d",&chess[i][j]);
        ball[i][j]=1;
    }
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++){
        if(!visit[i][j])
            Move(i,j);
    }
    for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++)
        printf("%d ",ball[i][j]);
    printf("\n");
    }
}