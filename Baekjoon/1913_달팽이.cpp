#include<stdio.h>
int arr[1004][1004];
int dx[4]={0,-1,0,1};
int dy[4]={1,0,-1,0};
int main(){
    int n,t,pos_x=0,pos_y=1,d=0,a,ans_x,ans_y;
    scanf("%d %d",&n,&a);
    t=n*n;
    while(t>0){
        int nx=pos_x+dx[d%4];
        int ny=pos_y+dy[d%4];
        if(nx<=0||ny<=0||nx>n||ny>n||arr[nx][ny]!=0){
            d++;
            continue;
        }
        arr[nx][ny]=t;
        if(t==a){
            ans_x=nx;
            ans_y=ny;
        }
        t--;
        pos_x=nx,pos_y=ny;
    }
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        printf("%d ",arr[i][j]);
    printf("\n");
    }
    printf("%d %d",ans_x,ans_y);
}