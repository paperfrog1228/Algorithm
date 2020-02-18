#include<stdio.h>
int r,c,cnt;
int alpabet[100],visit[27][27],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},max=-1;
char arr[21][21];
void move(int x,int y){
    cnt++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(visit[nx][ny]||nx<0||ny<0||r<=nx||c<=ny||alpabet[arr[nx][ny]])
            continue;
        visit[nx][ny]=1;
        alpabet[arr[nx][ny]]=1;
        move(nx,ny);
    }
    if(cnt>max)
    max=cnt;
    visit[x][y]=0;
    alpabet[arr[x][y]]=0;
    cnt--;
}
int main(){
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    scanf("%s",arr[i]);
    visit[0][0]=1;
    alpabet[arr[0][0]]=1;
    move(0,0);
    printf("%d",max);
}