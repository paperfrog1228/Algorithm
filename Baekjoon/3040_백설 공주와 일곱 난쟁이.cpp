#include<stdio.h>
#include<algorithm>
using namespace std;
int a[9],ans[7],visit[9]={0,};
void DFS(int i,int cnt,int sum){
    if(visit[i])
        return;
    visit[i]=1;
    ans[cnt]=a[i];
    sum+=a[i];
    cnt++;
    if(cnt==7){
        if(sum==100){
            sort(ans,ans+7);
            for(int i=0;i<7;i++)
            printf("%d\n",ans[i]);
            return;
        }
    }
    else
    for(int j=i;j<9;j++)
        DFS(j,cnt,sum);
    visit[i]=0;    
}
int main(){
    for(int i=0;i<9;i++)
    scanf("%d",&a[i]);
    sort(a,a+9);
    for(int i=0;i<9;i++)
    DFS(i,0,0);    
}