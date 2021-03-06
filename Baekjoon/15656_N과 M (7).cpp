#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m;
int arr[12],ans[12];
void DFS(int i,int cnt)
{   
    cnt++;
    ans[cnt]=arr[i];
    if(cnt==m){
        for(int j=1;j<=m-1;j++)
        printf("%d ",ans[j]);
        printf("%d\n",ans[m]);
        return;
    }
    for(int j=1;j<=n;j++)
        DFS(j,cnt);
    cnt--;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++)
        DFS(i, 0);
}