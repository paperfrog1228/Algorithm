#include<stdio.h>
#define FOR(i,s,n) for(int i=s;i<=n;i++) 
int ice[302][302],count[302][302],x[4]={-1,1,0,0},y[4]={0,0,1,-1},n,m,dfsCount=0,year=0;
bool visit[302][302];
void DFS(int i,int j){
    if(visit[i][j])
    return;
    visit[i][j]=true;
    count[i][j]=0;
    FOR(d, 0, 3){
        if(ice[i+x[d]][j+y[d]]==0){
          count[i][j]++;
        }
        else DFS(i+x[d],j+y[d]);
    }
}
int GetYear(){
    int dfsCount=0;
    bool isNotZero=false;
    FOR(i, 1, m)FOR(j, 1, n){
        visit[i][j]=false;
        if(ice[i][j]!=0)
        isNotZero=true;
    }
    if(!isNotZero) return 0;
    FOR(i, 1, m)
    FOR(j, 1, n){
    if(!visit[i][j]&&ice[i][j]>0){
        DFS(i,j);
        dfsCount++;
    }
    }
    if(dfsCount>1)
        return year;    
    

    FOR(i, 1, m)FOR(j, 1, n){
        ice[i][j]-=count[i][j];
        if(ice[i][j]<0)
        ice[i][j]=0;
     }
    year++;
    return GetYear();
}
int main(){
    scanf("%d %d",&m,&n);
    FOR(i, 1, m)FOR(j, 1, n)
    scanf("%d",&ice[i][j]);
    printf("%d",GetYear());
}