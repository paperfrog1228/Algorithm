#include <stdio.h>
int t,h,w,v[104][104],cnt;
char m[104][104];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void DFS(int x,int y){
    v[x][y]++;
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<0||ny<0||nx>=h||ny>=w)
            continue;
        if(v[nx][ny]||m[nx][ny]=='.')
            continue;
        DFS(nx,ny);
    }
}
void testcase(){
    cnt=0;
    scanf("%d %d",&h,&w);
    for(int i=0;i<h;i++)
    scanf("%s",m[i]);
    for(int i=0;i<=h;i++)
    for(int j=0;j<=w;j++)
        v[i][j]=0;
    for(int i=0;i<h;i++)
    for(int j=0;j<w;j++){
        if(v[i][j]||m[i][j]=='.')
        continue;
        cnt++;
        DFS(i,j);
    }
    printf("%d\n",cnt);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    testcase();
}