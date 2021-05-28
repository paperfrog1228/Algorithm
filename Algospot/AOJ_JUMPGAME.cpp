#include<stdio.h>
#include<memory.h>
int t,n;
int map[110][110],dp[110][110];
int f(int a,int b){
	if(a<1||b<1||a>n||b>n) return 0;
	if(a==n&&b==n) return 1;
	int &ret=dp[a][b];
	if(ret!=-1) return ret;
	int tmp=f(a+map[a][b],b);
	if(tmp>0) ret=tmp;
	tmp=f(a,b+map[a][b]);
	if(tmp>0) ret=tmp;
	return ret;
}
void solution(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
		scanf("%d",&map[i][j]);
	memset(dp,-1,sizeof(dp));
	f(1,1);
	if(dp[1][1]==1) printf("YES\n");
	else printf("NO\n");
}
int main(){
	scanf("%d",&t);
	while(t--) solution();
}
