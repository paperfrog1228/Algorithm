#include <stdio.h>
#define FOR for(int i=1;i<=10;i++)for(int j=1;j<=10;j++)
int map[12][12],paper[6]={0,5,5,5,5,5},ans=100;
bool Check(int x,int y,int n){
    if(paper[n]==0)
        return false;
    for(int i=x;i<x+n;i++)
    for(int j=y;j<y+n;j++)
    if(map[i][j]!=1)
        return false;
    paper[n]--;
    for(int i=x;i<x+n;i++)
    for(int j=y;j<y+n;j++)
        map[i][j]=2;
    return true;
}
void Uncheck(int x,int y,int n){
    for(int i=x;i<x+n;i++)
    for(int j=y;j<y+n;j++)
    map[i][j]=1;
    paper[n]++;
}
void DFS(int x,int y,int cnt){
    bool dfs=false;
    for(int n=1;n<=5;n++)
    if(Check(x,y,n)){
        bool end=true;
        FOR
        if(map[i][j]==1){
            end=false;
            DFS(i,j,cnt+1);
            goto EXIT;
        }
        EXIT:
        if(end&&cnt<ans)
            ans=cnt;
        Uncheck(x,y,n);
    }
}
int main(){
    FOR
    scanf("%d",&map[i][j]);
    bool zero=true;
    FOR
    if(map[i][j]==1){
        zero=false;
        DFS(i,j,1);
        goto EXIT;
    }
    printf("0");
    return 0;
    EXIT:
    if(ans==100)
    printf("-1");
    else
    printf("%d",ans);
}