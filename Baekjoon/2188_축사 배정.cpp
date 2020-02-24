#include<stdio.h>
#include<vector>
using namespace std;
vector<vector<int>> cow;
int n,m,ans[202]={0,},visit[202]={0,};
bool DFS(int x){
    for(int i=0;i<cow[x].size();i++){
        int home=cow[x][i];//들어가고자 하는 축사
        int cow_num=ans[home];//그 축사안에 있는 소 번호
        if(ans[home]==0){
            ans[home]=x;
            return true;
        }
        if(!visit[home]){
            visit[home]=1;
            if(DFS(cow_num)){
                ans[home]=x;
                for(int j=0;j<=m+1;j++)
                    visit[j]=0;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int t1,t2,cnt=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<=n+1;i++){
        vector<int> a;
        cow.push_back(a);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&t1);
        for(int j=1;j<=t1;j++){
            scanf("%d",&t2);
            cow[i].push_back(t2);
        }
    }
   for(int i=1;i<=n;i++)
       DFS(i);
   
    for(int i=1;i<=m;i++)
    if(ans[i]!=0)
    cnt++;
    printf("%d\n",cnt);
}