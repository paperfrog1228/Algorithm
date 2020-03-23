#include<stdio.h>
int n,m;
int ans[12],visit[12];
void DFS(int i,int cnt)
{   
    visit[i]=1;
    cnt++;
    ans[cnt]=i;
    if(cnt==m){
        for(int j=1;j<=m-1;j++)
        printf("%d ",ans[j]);
        printf("%d\n",ans[m]);
    }
    for(int j=1;j<=n;j++){
        if(visit[j])
            continue;
        DFS(j,cnt);
    }
    cnt--;
    visit[i]=0;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        ans[1]=i;
        DFS(i, 0);
    }
}