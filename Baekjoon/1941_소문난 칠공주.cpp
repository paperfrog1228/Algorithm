#include<stdio.h>
char map[5][5];
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0},ans,visit[1<<25];
void DFS(int s,int bit,int cnt){
    if(cnt==7){
        if(s>=4)
        ans++;
        return;
    }
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++){
        if(!(bit&(1<<(i*5+j))))
            continue;
        for(int k=0;k<4;k++){
            int nx=dx[k]+i,ny=dy[k]+j;
            if(nx<0||ny<0||nx>=5||ny>=5)
            continue;
            int nbit=(bit|(1<<(nx*5+ny)));
            if(visit[nbit])
                continue;
            visit[nbit]++;
            if(map[nx][ny]=='S')
            DFS(s+1,nbit,cnt+1);
            else
            DFS(s,nbit,cnt+1);
        }
    }
}
int main() {
    for(int i=0;i<5;i++)
    scanf("%s",map[i]);
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++){
        if(map[i][j]=='S')
        DFS(1,(1<<(5*i+j)),1);
        else
        DFS(0,(1<<(5*i+j)),1);
    }
    printf("%d",ans);
}