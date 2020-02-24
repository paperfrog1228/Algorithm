#include<stdio.h>
int n,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},visit[101][101];
char pic[102][102];
void DFS(int x,int y,char t){
    visit[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];int ny=y+dy[i];
        if(nx<0||ny<0||n<=nx||n<=ny)
        continue;
        if(visit[nx][ny])
        continue;
        if(t=='R'||t=='G'){
            if(pic[nx][ny]=='B')
                continue;
        }
        else{
            if(pic[nx][ny]=='R'||pic[nx][ny]=='G')
                continue;
        }
        DFS(nx,ny,pic[nx][ny]);
    }
}
void DFS2(int x,int y,char t){
    visit[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+dx[i];int ny=y+dy[i];
        if(nx<0||ny<0||n<=nx||n<=ny)
        continue;
        if(visit[nx][ny])
        continue;
        if(t!=pic[nx][ny])
            continue;
        DFS2(nx,ny,t);
    }
}
int main(){
    int cnt1=0,cnt2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",pic[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        visit[i][j]=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        if(!visit[i][j]){
            DFS(i,j,pic[i][j]);
        cnt1++;
        }
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        visit[i][j]=0;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
        if(!visit[i][j]){
            DFS2(i,j,pic[i][j]);
        cnt2++;
        }
    }
    printf("%d %d",cnt2,cnt1);
}