#include<stdio.h>
int cab[53][53]={0,},dis[5]={0,1,0,-1,0},count=0;//양배추 영어로 뭔지 아는 사람?
void dfs(int i,int j)
{
	for(int k=0;k<=3;k++)
		if(cab[i+dis[k]][j+dis[k+1]]==1){
		cab[i+dis[k]][j+dis[k+1]]=0;
		dfs(i+dis[k],j+dis[k+1]);}
	return ;
}
int main()
{
int t,m,n,k,x,y;scanf("%d",&t);
for(int testcase=1;testcase<=t;testcase++){
	count=0;
	scanf("%d %d %d",&m,&n,&k);
	for(int i=1;i<=k;i++){
		scanf("%d %d",&x,&y);
		cab[x+1][y+1]=1;}
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++){
		if(cab[i][j]==1)
		{
			cab[i][j]=0;
			dfs(i,j);
		count++;}
	}
	printf("%d\n",count);
}
return 0;
}

