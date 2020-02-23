#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int m,n,k,arr[102][102],dx[4]={1,-1,0,0},dy[4]={0,0,1,-1},nx,ny,visit[102][102];
vector<int> ans;
int DFS(int x,int y){
    visit[x][y]=1;
    int cnt=1;
    for(int i=0;i<4;i++){
        nx=x+dx[i],ny=y+dy[i];
        if(nx<=0||ny<=0||m<nx||n<ny)
            continue;
        if(arr[nx][ny]||visit[nx][ny])
            continue;
        cnt+=DFS(nx,ny);
    }
    return cnt;
}
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d",&m,&n,&k);
    for(int i=1;i<=k;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(int j=x1+1;j<=x2;j++)
            for(int k=y1+1;k<=y2;k++)
                arr[k][j]=2;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++){
            if(visit[i][j]||arr[i][j])
                continue;
            ans.push_back(DFS(i,j));
        }
    sort(ans.begin(),ans.end());
    int t=ans.size();
    printf("%d\n",t);
    for(int i=0;i<t;i++)
    printf("%d ",ans[i]);
}