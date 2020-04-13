#include<stdio.h>
#define FOR(i,n) for(int i=1;i<=n;i++)
#define Dis(a,b,c,d) ((a>c?a-c:c-a)+(b>d?b-d:d-b))
int n,m,d,arc_row,ans=0,cnt=0;
int grid[17][17],visit[17];
struct pos{int x;int y;};
void Kill(){
    FOR(i,n)FOR(j,m)
    if(grid[i][j]>1){
        grid[i][j]=0;
        cnt++;
    }
}
bool Is_End(){
    FOR(i,arc_row)FOR(j,m)
    if(grid[i][j]!=0)
        return false;
    return true;
}
void Arc_Shoot(int r,int c){
    pos arc={r,c};
    pos enemy={17,17};
    int min_dis=9999;
    FOR(i,n)FOR(j,m){
        if(grid[i][j]<1)
            continue;
        int dis=Dis(arc.x,arc.y,i,j);
        if(dis>d)
           continue;
        if(dis<min_dis){
            min_dis=dis;
            enemy={i,j};
        }
        else if(dis==min_dis)
            if(j<enemy.y)
                enemy={i,j};
    }
    grid[enemy.x][enemy.y]++;
}
int main(){
    int map[17][17];
    scanf("%d %d %d",&n,&m,&d);
    FOR(i,n)FOR(j,m)
    scanf("%d",&map[i][j]);
    for(int i=1;i<=m;i++)
    for(int j=i+1;j<=m;j++)
    for(int k=j+1;k<=m;k++){
        FOR(r,n)FOR(c,m)
        grid[r][c]=map[r][c];
        cnt=0;
        arc_row=n+1;
        while(1){
        Arc_Shoot(arc_row,i);
        Arc_Shoot(arc_row,j);
        Arc_Shoot(arc_row,k);
        Kill();
        arc_row--;
        FOR(c,m)
        grid[arc_row][c]=0;
        if(Is_End())
            break;
        }
        if(cnt>ans)
        ans=cnt;
    }
    printf("%d",ans);
}