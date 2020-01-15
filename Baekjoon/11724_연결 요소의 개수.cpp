#include<stdio.h>
#define MAX 1001
int n,arr[MAX][MAX],visit[MAX],ans=0;
void DFS(int a){
    visit[a]=1;
    for(int i=1;i<=n;i++){
        if(arr[a][i]==1){
        if(visit[i]!=1)
        DFS(i);    
       }
    }
}
int main(){
    int m,a,b;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    for(int i=1;i<=n;i++){
        if(visit[i]!=1)
        {DFS(i);
        ans++;}
    }
    printf("%d",ans);
}