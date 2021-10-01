#include<stdio.h>
#include<queue>
using namespace std;
queue<pair<int,int>> q;
int n,r,c,x,y,vis[210][210];
int dx[6]={-2,-2,0,0,2,2};
int dy[6]={-1,1,-2,2,-1,1};
int main(){
	scanf("%d %d %d %d %d",&n,&r,&c,&x,&y);
	vis[r][c]++;
	q.push({r,c});
	while(!q.empty()){
		pair<int,int> now=q.front(); q.pop();
        if(now.first==x&&now.second==y){
            printf("%d",vis[x][y]-1);
            return 0;
        }
        for(int i=0;i<6;i++){
            int nx=now.first+dx[i];
            int ny=now.second+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=n) continue;
            if(vis[nx][ny]) continue;
            vis[nx][ny]=vis[now.first][now.second]+1;
            q.push({nx,ny});
        }
	}
    printf("-1");
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int n,a;
vector<int> dp;
int main(){
    scanf("%d %d",&n,&a);
    dp.push_back(a); 
    for(int i=1;i<n;i++) {
        scanf("%d",&a);
        if(dp.back()<a) dp.push_back(a);
        else{
            auto it=lower_bound(dp.begin(),dp.end(),a);
            *it=a;
        }
    }
    printf("%d",dp.size());
}}