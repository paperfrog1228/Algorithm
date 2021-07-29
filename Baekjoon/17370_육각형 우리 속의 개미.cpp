#include<iostream>
#define ll long long 
int n,vis[500][500];
ll ans;
int dx1[3]={1,-1,0};
int dy1[3]={1,1,-2};
int dx2[3]={-1,1,0};
int dy2[3]={-1,-1,2};
void go(int x,int y,int cnt,int dir){
    if(cnt==n) {
        if(vis[x][y]) ans++; return;}
    if(vis[x][y]) return;
    vis[x][y]++;
    if(cnt%2==0) {
        for(int i=0;i<3;i++) if(i!=dir) 
        go(x+dx1[i],y+dy1[i],cnt+1,i);
    }
    else for(int i=0;i<3;i++) if(i!=dir) go(x+dx2[i],y+dy2[i],cnt+1,i);
    vis[x][y]=0;
}
int main(){
    scanf("%d",&n);
    vis[200][198]++;
    go(200,200,0,2);
    printf("%lld",ans);
}