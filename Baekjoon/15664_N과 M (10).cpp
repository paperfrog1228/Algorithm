#include<stdio.h>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;
int n,m;
set<vector<int>> last_ans;
int arr[12],ans[12],visit[12];
void DFS(int i,int cnt)
{   
    visit[i]=1;
    cnt++;
    ans[cnt]=arr[i];
    if(cnt==m){
        vector<int> s;
        for(int j=1;j<=m;j++)
        s.push_back(ans[j]);
        last_ans.insert(s);
    }
    for(int j=i;j<=n;j++){
        if(visit[j])
        continue;
        DFS(j,cnt);
    }
    visit[i]=0;
    cnt--;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++)
        DFS(i, 0);
    for(auto i = last_ans.begin(); i!=last_ans.end();++i){
        for(auto j=(*i).begin();j!=(*i).end();++j)
            printf("%d ",*j);
        printf("\n");
    }
} 