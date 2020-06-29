#include <stdio.h>
int r,c,dr[3]={-1,0,1},pipe[10005][505],cnt;
char map[10005][505];
bool Bread(int y,int x){
    pipe[y][x]=1;
    if(x==c-1){
        cnt++;
        return true;
    }
    bool flag=false;
    for(int i=0;i<3;i++){
        int nr=y+dr[i];
        int nc=x+1;
        if(nr<0||nc<0||nr>=r||nc>=c||pipe[nr][nc]||map[nr][nc]=='x')
            continue;
        flag=Bread(nr,nc);
        if(flag){
            pipe[y][x]=1;
            break;
        }
        else 
            pipe[y][x]=2;
    }
    if(!flag){
        if(pipe[y][x]==1)
        pipe[y][x]=0;
        return false;
    }
    return true;
}
int main(){
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    scanf("%s",map[i]);
    for(int i=0;i<r;i++)
        Bread(i,0);
    printf("%d",cnt);
}