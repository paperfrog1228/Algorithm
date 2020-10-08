#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
struct point_i{int x;int y;};
vector<point_i> house,chicken;
int n,m,map[52][52],ans=987654321,mm,bit[1<<14];
int get_dist(point_i a,point_i b){return abs(a.x-b.x)+abs(a.y-b.y);}
int get(vector<point_i> ch){
    int ret=0;
    for(int p=0;p<house.size();p++){
    int chc_dist=987654321;
        for(int i=0;i<ch.size();i++){
            int dist=get_dist(house[p], ch[i]);
            if(chc_dist>dist)
                chc_dist=dist;
        }
        ret+=chc_dist;
    }
    return ret;
}
void dfs(int n,int b,int dep){
    b|=(1<<n);
    if(bit[b]) return; bit[b]++;
    if(dep==m){
        vector<point_i> arg;
        for(int i=1;i<=mm;i++)
            if(b&(1<<i)) arg.push_back(chicken[i-1]);
        int tmp=get(arg);
        if(ans>tmp) ans=tmp;
        return;
    }
    for(int i=0;i<=mm;i++)
    dfs(i,b,dep+1);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&map[i][j]);
        if(map[i][j]==1)
        house.push_back({i,j});
        if(map[i][j]==2)
        chicken.push_back({i,j});
    }
    mm=chicken.size();
    for(int i=1;i<=mm;i++)
    dfs(i,0,1);
    printf("%d",ans);
}