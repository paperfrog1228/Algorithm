#include <stdio.h>
#define INF 40000
struct P{int x;int y;};
P node[104];
int t,n,dist[105][105];
int GetDistance(P a,P b){
    int ret=0;
    a.x>b.x?ret+=a.x-b.x:ret+=b.x-a.x;
    a.y>b.y?ret+=a.y-b.y:ret+=b.y-a.y;
    if(ret>1000||ret==0)
    ret=INF;
    return ret;
}
void testcase(){
    scanf("%d",&n);
    for(int i=0;i<=n+1;i++)
    scanf("%d %d",&node[i].x,&node[i].y);
    for(int i=0;i<=n+1;i++)
    for(int j=0;j<=n+1;j++)
    dist[i][j]=GetDistance(node[i],node[j]);
    for(int k=0;k<=n+1;k++)
    for(int i=0;i<=n+1;i++)
    for(int j=0;j<=n+1;j++)
    if(dist[i][j]>dist[i][k]+dist[k][j])
    dist[i][j]=dist[i][k]+dist[k][j];
    if(dist[0][n+1]==INF)
    printf("sad\n");
    else
    printf("happy\n");
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    testcase();
}