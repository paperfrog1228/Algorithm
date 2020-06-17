#include <stdio.h>
struct dir{int x;int y;char d;};
dir U={-1,0,'U'},D={1,0,'D'},R={0,1,'R'},L={0,-1,'L'},cur;
int map[55][55],n,m,r,c,t,cnt;
void LeftTurn(){
    if(cur.d=='U')
        cur=L;
    else if(cur.d=='L')
        cur=D;
    else if(cur.d=='D')
        cur=R;
    else 
        cur=U;
}
int main(){
    scanf("%d %d",&n,&m);
    scanf("%d %d %d",&r,&c,&t);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%d",&map[i][j]);
    r++;c++;
    if(t==0)
    cur=U;
    else if(t==1)
    cur=R;
    else if(t==2)
    cur=D;
    else
    cur=L;
    int turnCnt=0;
    while(1){
        if(map[r][c]==0){
            map[r][c]=2;
            cnt++;
        }
        if(turnCnt>=4){
            if(map[r-cur.x][c-cur.y]==2){
            turnCnt=0;
            r-=cur.x,c-=cur.y;
            }
            else break;   
        }
        LeftTurn();
        if(map[r+cur.x][c+cur.y]==0){
            turnCnt=0;
            r+=cur.x,c+=cur.y;
        }
        else{
            turnCnt++;
            continue;
        }
    }
   printf("%d",cnt);
}