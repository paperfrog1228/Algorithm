#include<stdio.h>
#include<queue>
using namespace std;
struct pos{int x;int y;};
int w,h;
queue<pos> q,q2,sgq,sgq2;
pos d[4]={{1,0},{-1,0},{0,1},{0,-1}};
char map[1004][1004];
int visit[1004][1004];
int Check(){
    while(!q2.empty()||!sgq2.empty()){
        queue<pos> temp;
        q=q2;
        q2=temp;
        while(!q.empty()){
            pos p=q.front();
            q.pop();   
            for(int i=0;i<4;i++){
                int nx=p.x+d[i].x;
                int ny=p.y+d[i].y;
                if(nx<0||ny<0||nx>=h||ny>=w)
                    continue;
                if(visit[nx][ny]||map[nx][ny]=='#'||map[nx][ny]=='*')
                    continue;
                map[nx][ny]='*';
                pos p2={nx,ny};
                q2.push(p2);
            }
        }
        sgq=sgq2;
        sgq2=temp;
        while(!sgq.empty()){
            pos p=sgq.front();
            sgq.pop();
            int count=visit[p.x][p.y];
            if(p.x<=0||p.y<=0||p.x>=h-1||p.y>=w-1)
                    return count;
            for(int i=0;i<4;i++){
                int nx=p.x+d[i].x;
                int ny=p.y+d[i].y;
                if(visit[nx][ny]==0&&map[nx][ny]=='.'){
                    pos sgp={nx,ny};
                    sgq2.push(sgp);
                    visit[nx][ny]=count+1;
                }
            }
        }
    }
    return -1;
}
void Test(){
    scanf("%d %d",&w,&h);
    for(int i=0;i<=h+2;i++)
    for(int j=0;j<=w+2;j++)
        visit[i][j]=0;
    for(int i=0;i<h;i++)
    scanf("%s",map[i]);
    for(int i=0;i<h;i++)
    for(int j=0;j<w;j++){
        if(map[i][j]=='*'){
            pos p={i,j};
            q2.push(p);
        }
        if(map[i][j]=='@'){
            pos p={i,j};
            sgq2.push(p);
            visit[i][j]=1;
        }
    }
    int ans=Check();
    if(ans==-1)
    printf("IMPOSSIBLE\n");
    else
    printf("%d\n",ans);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    queue<pos> temp;
    q=temp;q2=temp;
    sgq=temp;sgq2=temp;
    Test();
    }
}