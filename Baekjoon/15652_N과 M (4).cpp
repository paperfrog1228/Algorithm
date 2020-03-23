#include<stdio.h>
int n,m;
int ans[12];
void DFS(int i,int cnt)
{   
    cnt++;
    ans[cnt]=i;
    if(cnt==m){
        for(int j=1;j<=m-1;j++)
        printf("%d ",ans[j]);
        printf("%d\n",ans[m]);
        cnt--;
        return;
    }
    for(int j=i;j<=n;j++)
        DFS(j,cnt);
    cnt--;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        ans[1]=i;
        DFS(i, 0);
    }
}