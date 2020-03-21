#include<stdio.h>
#include<vector>
using namespace std;
int n,a[25][25],visit[25],ans=100000000;
vector<int> start_team;
void Check(){
    int start=0,link=0,temp=0;
    for(int i=0;i<start_team.size();i++)
        for(int j=1;j<=n;j++){
            if(visit[j])
                start+=a[start_team[i]][j];
        }
    for(int i=1;i<=n;i++){
        if(visit[i])
            continue;
        for(int j=1;j<=n;j++){
            if(visit[j])
                continue;
            link+=a[i][j];
        }
    }
    start<link?temp=link-start:temp=start-link;
    if(temp<ans)
    ans=temp;
}
void DFS(int x){
    if(visit[x]) return;
    visit[x]=1;
    start_team.push_back(x);
    if(start_team.size()==n/2)
    Check();
    else
    for(int i=x+1;i<=n;i++)
        DFS(i);
    visit[x]=0;
    start_team.pop_back();
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    for(int i=1;i<=n/2;i++)
        DFS(i);
    printf("%d",ans);
}