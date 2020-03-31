#include <stdio.h>
#define U 0
#define D 1 
#define L 2 
#define R 3
int b[22][22],n,max=0;
struct Dir{int x;int y;};
Dir dir[4]={{-1,0},{1,0},{0,-1},{0,1}};
void Check(int(*input)[22]){
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    if(max<input[i][j])
        max=input[i][j];
}
void Move(int int_dir,int depth,int(*input)[22]){
    Check(input);
    if(depth==5)
        return;
    int visit[22][22];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        visit[i][j]=0;
    int temp[22][22];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        temp[i][j]=input[i][j];
    int nx=0,ny=0;
    int startX=1,endX=n+1,opX=1,startY=1,endY=n+1,opY=1;
    Dir d;
    if(int_dir==U)
        d=dir[U];
    if(int_dir==D){
        d=dir[D];
        startY=n;
        endY=0;
        opY=-1;
    }
    if(int_dir==L)
        d=dir[L];
    if(int_dir==R){
        d=dir[R];
        startX=n;
        endX=0;
        opX=-1;
    }
    for(int i=startY;i!=endY;i+=opY)
    for(int j=startX;j!=endX;j+=opX){
         nx=i;ny=j;
        while(1){
            if(nx+d.x<=0||ny+d.y<=0||nx+d.x>n||ny+d.y>n){
                break;
            }
            if(temp[nx+d.x][ny+d.y]==0){
                temp[nx+d.x][ny+d.y]=temp[nx][ny];
                temp[nx][ny]=0;
            }
            else if(temp[nx+d.x][ny+d.y]==temp[nx][ny]){
                if(visit[nx+d.x][ny+d.y])
                    break;
                temp[nx+d.x][ny+d.y]=temp[nx][ny]*2;
                temp[nx][ny]=0;
                visit[nx+d.x][ny+d.y]=1;
                break;
            }
            else break;    
            nx+=d.x,ny+=d.y;
        }
    }
    depth++;
    for(int i=0;i<4;i++)
        Move(i,depth,temp);
}
int main(){
    scanf("%d",&n);
    int temp[22][22];
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&b[i][j]);
        temp[i][j]=b[i][j];
    }
    for(int i=0;i<4;i++)
        Move(i,0,temp);
    printf("%d",max);
}