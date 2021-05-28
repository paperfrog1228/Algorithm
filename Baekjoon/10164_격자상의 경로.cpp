#include<iostream>
#include<algorithm>
#include<memory.h>
int n,m,k,nx,ny;
long long dp[20][20];
int f1(int x,int y){
    if(x>nx||y>ny) return 0;
    if(x==nx&&y==ny) return 1;
    long long &ret=dp[x][y];
    if(ret!=-1) return ret;
    return ret=f1(x+1,y)+f1(x,y+1);
}
int f2(int x,int y){
    if(x>n||y>m) return 0;
    if(x==n&&y==m) return 1;
    long long &ret=dp[x][y];
    if(ret!=-1) return ret;
    return ret=f2(x+1,y)+f2(x,y+1);
}
int main(){
    memset(dp,-1,sizeof(dp));
    scanf("%d %d %d",&n,&m,&k);
    if(k==0) nx=n,ny=m;
    else{
    nx=k/m+1;ny=k%m;if(k%m==0) nx--,ny=m;}
    f1(1,1);
    f2(nx,ny);
    long long ans=dp[1][1];
    if(k!=0) ans*=dp[nx][ny];
    printf("%lld",ans);
}
