#include<stdio.h>
int visit[8][8];
char s[40][4];
int dx[8]={1,2, 2, 1,-1,-2,-2,-1};
int dy[8]={2,1,-1,-2,-2,-1, 1, 2};
bool Check(){
    for(int i=1;i<=36;i++)
    scanf("%s",s[i]);
    int tempx=s[1][0]-64,tempy=s[1][1]-48;
    int startx=tempx,starty=tempy;
    visit[tempx][tempy]=1;
    for(int i=2;i<=36;i++){
        int x=s[i][0]-64,y=s[i][1]-48;
        if(visit[x][y])
            return false;
        bool isVaild=false;
        for(int j=0;j<8;j++){
            int nx=tempx+dx[j],ny=tempy+dy[j];
            if(nx==x&&ny==y)
                isVaild=true;
        }
        if(!isVaild)
            return false;
        visit[x][y]=1;
        tempx=x;tempy=y;
    }
    for(int i=1;i<=6;i++)
    for(int j=1;j<=6;j++)
        if(visit[i][j]==0)
            return false;
    for(int j=0;j<8;j++){
        int nx=tempx+dx[j],ny=tempy+dy[j];
        if(nx==startx&&ny==starty)
            return true;
    }
    return false;
}
int main(){
    if(Check())
    printf("Valid\n");
    else
    printf("Invalid\n");
}