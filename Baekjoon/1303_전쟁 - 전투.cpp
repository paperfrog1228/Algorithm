#include <stdio.h>
int n,m,v[104][104],t,b,w;
char map[104][104];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void DFS(int x,int y,char cur){
    v[x][y]++;
    t++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<0||ny<0||nx>=m||ny>=n)
            continue;
        if(v[nx][ny]||map[nx][ny]!=cur)
            continue;
        DFS(nx,ny,cur);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++)
    scanf("%s",map[i]);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        if(v[i][j])
        continue;
        t=0;
        DFS(i,j,map[i][j]);
        if(map[i][j]=='B')
        b+=t*t;
        else
        w+=t*t;
    }
    printf("%d %d",w,b);
}