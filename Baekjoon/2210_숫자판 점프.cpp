#include<bits/stdc++.h>
int a[10][10];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
std::map<int,int> mp;
void go(int x,int y,int cnt,int now){
    if(x<1||y<1||x>5||y>5) return;
    if(cnt==6) {mp[now]++; return;}
    now+=a[x][y]*pow(10,cnt);
    for(int i=0;i<4;i++) go(x+dx[i],y+dy[i],cnt+1,now);
}
int main(){
    for(int i=1;i<=5;i++)
    for(int j=1;j<=5;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<=5;i++)
    for(int j=1;j<=5;j++)
    go(i,j,0,0);
    printf("%lu",mp.size());
}