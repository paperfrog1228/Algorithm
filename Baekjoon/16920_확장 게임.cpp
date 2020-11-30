#include <stdio.h>
#include <queue>
struct pos{int x;int y;};
std::queue<pos> q[10],tmp;
int n,m,p,s[10],ans[10];
pos dir[4]={{0,1},{1,0},{-1,0},{0,-1}};
char map[1003][1003];
void get(int player,pos p){
    for(int i=0;i<4;i++){
        int nx=p.x+dir[i].x;
        int ny=p.y+dir[i].y;
        if(nx<1||ny<1||nx>n||ny>m)
            continue;
        if(map[nx][ny]!='.')
            continue;
        map[nx][ny]='#';
        tmp.push({nx,ny});
        ans[player]++;
    }
}
int main(){
    scanf("%d %d %d",&n,&m,&p);
    for(int i=1;i<=p;i++) 
        scanf("%d",&s[i]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        scanf(" %1c",&map[i][j]);
        if('1'<=map[i][j]&&map[i][j]<='9')
            q[map[i][j]-'0'].push({i,j}),ans[map[i][j]-'0']++,map[i][j]='#';
    }
    while(1){
        bool end=true;
        for(int i=1;i<=p;i++){
            if(q[i].empty())
                continue;
            end=false;
            for(int j=1;j<=s[i];j++){
                if(q[i].empty()) break;
                while(!q[i].empty()){
                    get(i,q[i].front());
                    q[i].pop();
                }
                swap(q[i],tmp);
                std:: queue<pos> emp;
                swap(tmp,emp);
            }
        }
        if(end) break;
    }
    for(int i=1;i<=p;i++)
    printf("%d ",ans[i]);
}