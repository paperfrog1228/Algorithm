#include<stdio.h>
#include<vector>
using namespace std;
struct pos{int r;int c;};
int r,c,t,map[55][55],upr,downr,ans;
pos dir[4]={{0,1},{1,0},{0,-1},{-1,0}};
vector<pair<pos,int>> v;
void spread(pos p){
    int cnt=0;
    for(int i=0;i<4;i++){
        int nr=p.r+dir[i].r;   
        int nc=p.c+dir[i].c;
        if(nr<=0||nc<=0||nr>r||nc>c)
            continue;
        if(nc==1&&(nr==upr||nr==downr))
            continue;
        pos pp={nr,nc};
        v.push_back(make_pair(pp,map[p.r][p.c]/5));
        cnt++;
    }
    map[p.r][p.c]-=cnt*(map[p.r][p.c]/5);
}
void up(){
    for(int i=upr-1;i>1;i--)
        map[i][1]=map[i-1][1];
    for(int i=1;i<c;i++)
        map[1][i]=map[1][i+1];
    for(int i=1;i<upr;i++)
        map[i][c]=map[i+1][c];
    for(int i=c;i>1;i--)
        map[upr][i]=map[upr][i-1];
    map[upr][1]=0;
}
void down(){
    for(int i=downr+1;i<r;i++)
        map[i][1]=map[i+1][1];
    map[downr][1]=0;
    for(int i=1;i<c;i++)
        map[r][i]=map[r][i+1];
    for(int i=r;i>downr;i--)
        map[i][c]=map[i-1][c];
    for(int i=c;i>1;i--)
        map[downr][i]=map[downr][i-1];
}
int main(){
    scanf("%d %d %d",&r,&c,&t);
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++){
        scanf("%d",&map[i][j]);
        if(map[i][j]==-1){
            if(upr==0) upr=i;
            else downr=i;
            map[i][j]=0;
        }
    }
    while(t>0){
        v.clear();
        for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            if(map[i][j]>0)
                spread({i,j});
        for(auto i:v)
            map[i.first.r][i.first.c]+=i.second;
        up();down();
        t--;
    }
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++)
        ans+=map[i][j];
    printf("%d",ans);
}