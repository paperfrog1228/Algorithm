#include<stdio.h>
int w,h,map[53][53],visit[53][53];
int dx[8]={1,-1,0, 0,1,-1,-1, 1};
int dy[8]={0, 0,1,-1,1,-1, 1,-1};
void DFS(int x,int y){
    visit[x][y]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<1||ny<1||nx>w||ny>h)
            continue;
        if(visit[nx][ny]||map[nx][ny]==0)
            continue;
        DFS(nx,ny);
    }
}
int main(){
    while(1){
        int ans=0;
        scanf("%d %d",&h,&w);
        if(w==0&&h==0)
            break;
        for(int i=1;i<=w;i++)
        for(int j=1;j<=h;j++)
        visit[i][j]=0;
        for(int i=1;i<=w;i++)
        for(int j=1;j<=h;j++)
        scanf("%d",&map[i][j]);
        for(int i=1;i<=w;i++)
        for(int j=1;j<=h;j++){
            if(visit[i][j]||map[i][j]==0)
                continue;
            DFS(i,j);
            ans++;
        }
        printf("%d\n",ans);
    }
}