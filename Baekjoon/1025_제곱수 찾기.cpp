#include<iostream>
#include<map>
using namespace std;
int n,m,t[20][20];
long long ans=-1;
map<long long,int> mp;
void dfs(int x,int y,int ix,int iy,long long now){
    if(x<=0||y<=0||x>n||y>m) return;
    now*=10;
    now+=t[x][y];
    if(mp.find(now)!=mp.end()){
        if(ans<now) ans=now;
    }
    if(ix==0&&iy==0) return;
    dfs(x+ix,y+iy,ix,iy,now);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    scanf("%1d",&t[i][j]);
    for(long long i=0;i<=100000;i++) mp[i*i]++;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++){
        for(int ix=-10;ix<=10;ix++)
        for(int iy=-10;iy<=10;iy++)
        dfs(i,j,ix,iy,0);
    }
    printf("%lld",ans);
}