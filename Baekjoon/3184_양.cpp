#include<stdio.h>
char map[255][255];
int r,c,visit[255][255],ans_sheep=0,ans_wolf=0;
int dx[4]={1,-1,0, 0};
int dy[4]={0, 0,1,-1};
int sheep=0,wolf=0;
void DFS(int x,int y){
    visit[x][y]=1;
    if(map[x][y]=='o')
        sheep++;
    if(map[x][y]=='v')
        wolf++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<0||ny<0||nx>=r||ny>=c)
            continue;
        if(map[nx][ny]=='#'||visit[nx][ny])
            continue;
        DFS(nx,ny);       
    }
}
int main(){
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    scanf("%s",map[i]);
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++){
        if(!visit[i][j]&&map[i][j]!='#')
        DFS(i,j);
        if(sheep<=wolf)
        sheep=0;
        else
        wolf=0;
        ans_wolf+=wolf;
        ans_sheep+=sheep;
        wolf=0;
        sheep=0;
    }
    printf("%d %d",ans_sheep,ans_wolf);
}