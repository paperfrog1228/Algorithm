#include<stdio.h>
#include <queue>
using namespace std;
int n,m,v;
int adj[1001][1001];
int d_visit[1001];
int b_visit[1001];
int dfs(int v){
	d_visit[v]=1;
	printf("%d ",v);
	for(int i=1;i<=n;i++)
		if(adj[v][i]==1&&d_visit[i]==0)
			dfs(i);
return 0;
};
int bfs(int v){
	queue<int> q;
	q.push(v);
	b_visit[v]=1;
	while(!q.empty())
	{
		int a=q.front();
		q.pop();
		printf("%d ",a);
		for(int i=1;i<=n;i++)
		if(adj[a][i]==1&&b_visit[i]==0)
		{	q.push(i);
			b_visit[i]=1;}
	}

};
int main(){

scanf("%d %d %d",&n,&m,&v);
 
int i,j;
for(int k=1;k<=m;k++){
	scanf("%d %d",&i,&j);
	adj[i][j]=1;
	adj[j][i]=1;
}

dfs(v);
printf("\n");
bfs(v);
return 0;
}
