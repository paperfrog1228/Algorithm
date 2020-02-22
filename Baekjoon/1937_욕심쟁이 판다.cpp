#include<stdio.h>
#include<algorithm>
using namespace std;
int n,arr[502][502],dp[502][502],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},ans=-1;
int DFS(int x,int y){
    if(dp[x][y])
        return dp[x][y];
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<=0||ny<=0||n<nx||n<ny||arr[nx][ny]<=arr[x][y])
            continue;
        dp[x][y]=max(dp[x][y],DFS(nx,ny)+1);
    }
    return dp[x][y];
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&arr[i][j]);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
        if(dp[i][j]==0)
            ans=max(ans,DFS(i,j));
    printf("%d",ans+1);
}