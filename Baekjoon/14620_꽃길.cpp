#include<stdio.h>
int n,map[11][11],ans=2000000000;
void DFS(int i,int j,int gold,int cnt){
    if(i==1||j==1||i==n||j==n)
        return;
    int temp[5]={map[i][j],map[i-1][j],map[i+1][j],map[i][j-1],map[i][j+1]};
    for(int i=0;i<5;i++)
    if(temp[i]==-1)
        return;
    for(int i=0;i<5;i++)
        gold+=temp[i];
    if(cnt==3&&gold<ans)
        ans=gold;
    map[i][j]=map[i-1][j]=map[i+1][j]=map[i][j-1]=map[i][j+1]=-1;
    if(cnt<3)
    for(int i=2;i<n;i++)
    for(int j=2;j<n;j++)
        DFS(i,j,gold,cnt+1);
    map[i][j]=temp[0];
    map[i-1][j]=temp[1];
    map[i+1][j]=temp[2];
    map[i][j-1]=temp[3];
    map[i][j+1]=temp[4];
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&map[i][j]);
    for(int i=2;i<n;i++)
    for(int j=2;j<n;j++)
        DFS(i,j,0,1);
    printf("%d",ans);
}