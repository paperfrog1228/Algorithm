#include<iostream>
#include <algorithm>
#include<vector>
#define mod 1000000007
using namespace std;
int n,m,cnt;
char s[2004][2004];
long long ans=1;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    for(int k=0;k<4;k++){
        int nx=i+dx[k];
        int ny=j+dy[k];
        if(nx<0||ny<0||nx>=n||ny>=m) continue;
        if(s[nx][ny]!=s[i][j]){cnt++;break;}
    }
    for(int i=1;i<=n*m-cnt;i++)ans*=2,ans%=mod;
    printf("%lld",ans);
}
