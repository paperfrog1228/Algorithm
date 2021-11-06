#include<stdio.h>
#include<vector>
using namespace std;
struct pos{int x;int y;};
int n,m,h,x,ans,vis[12];
vector<pos> milks;
pos home;
void go(pos now,int hp, int dep,int index){
    hp+=h;
    vis[index]++;
    if(dep<milks.size()){
        for(int i=0;i<milks.size();i++){
            if(vis[i]) continue;
            int wi=now.x-milks[i].x;
            int he=now.y-milks[i].y;
            if(wi<0) wi*=-1;
            if(he<0) he*=-1;
            if(wi+he>hp) continue;
            go(milks[i],hp-wi-he,dep+1,i);
        }
    }
    int wi=now.x-home.x;
    int he=now.y-home.y;
    if(wi<0) wi*=-1;
    if(he<0) he*=-1;
    if(wi+he<=hp){
        if(ans<dep) ans=dep;
    }
    vis[index]=0;
}
int main(){
    scanf("%d %d %d",&n,&m,&h);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        scanf("%d",&x);
        if(x==1) home={i,j};
        if(x==2) milks.push_back({i,j});
    }
    for(int i=0;i<milks.size();i++){
        int wi=milks[i].x-home.x;
        int he=milks[i].y-home.y;
        if(wi<0) wi*=-1;
        if(he<0) he*=-1;
        if(wi+he>m) continue;
        go(milks[i],m-wi-he,1,i);
    }
    printf("%d",ans);
}