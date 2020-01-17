#include<stdio.h>
#define MAX 8
int arr[MAX+2][MAX+2],infect[MAX+2][MAX+2],n,m,max=-1,safe;
bool visit2[MAX+2][MAX+2];
void VirusInfect(int a,int b){
    if(infect[a][b]==1||infect[a][b]==-1||visit2[a][b])
    return;
    visit2[a][b]=true;
    infect[a][b]=2;
    VirusInfect(a+1,b);//¿À
    VirusInfect(a-1,b);//¿Þ
    VirusInfect(a,b+1);//À§
    VirusInfect(a,b-1);//¹Ø        
}
void VirusCheck(){
    safe=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(infect[i][j]==0)
                safe++;
    if(safe>max)
    max=safe;
}
void DFS(int wallCnt){
    if(wallCnt==3){
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++){
         infect[i][j]=arr[i][j];
         visit2[i][j]=false;
         }
 
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(infect[i][j]==2)
                VirusInfect(i,j);
    VirusCheck();
    return;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            if(arr[i][j]==0)
            {
            arr[i][j]=1;
            DFS(wallCnt+1);
            arr[i][j]=0;
            }
        }
}
int main(){
    int t;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++)
            arr[i][j]=-1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&arr[i][j]);

    int wallCnt=0;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(arr[i][j]==0){
            arr[i][j]=1;
            DFS(1);
            arr[i][j]=0;
        }
        printf("%d",max);

}