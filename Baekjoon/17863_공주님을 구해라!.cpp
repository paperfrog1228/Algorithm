#include<stdio.h>
#include<queue>
using namespace std;
struct Pos{int r;int c;int time;int gram;};
queue<Pos> q;
Pos dir[4]={{0,1},{1,0},{-1,0},{0,-1}};
int map[104][104],visit[104][104][2],n,m,t,ans=987654321;
int main(){
    scanf("%d %d %d",&m,&n,&t);
    for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&map[i][j]);
    q.push({1,1,0,0});
    visit[1][1][0]=1;
    while(!q.empty()){
        Pos now = q.front();
        q.pop();
        if(now.r==m&&now.c==n&&now.time<ans)
            ans=now.time;
        int nt=now.time+1;
        if(map[now.r][now.c]==2){
            now.gram=1;
            visit[now.c][now.r][1]=1;
        }
        for(int i=0;i<4;i++){
            int nr=now.r+dir[i].r;
            int nc=now.c+dir[i].c;
            if(nr<1||nc<1||nr>m||nc>n||nt>t)
                continue;
            if(map[nr][nc]==1&&now.gram==0)
                continue;
            if(visit[nr][nc][now.gram])
                continue;
            visit[nr][nc][now.gram]=1;
            q.push({nr,nc,nt,now.gram});
        }
    }
    if(ans==987654321)
    printf("Fail");
    else
    printf("%d",ans);
}