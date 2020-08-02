#include<stdio.h>
#include<vector>
std::vector<int> v[100004];
int n,s,d,depth[100004],visit[100004],visit2[100004],cnt;
int DFS(int n){
    visit[n]++;
    int temp=0;
    for(int i=0;i<v[n].size();i++){
        if(visit[v[n][i]])
            continue;
        temp=DFS(v[n][i]);
        if(depth[n]<temp)
            depth[n]=temp;
    }
    return depth[n]+1;
}
void Move(int n){
    visit2[n]++;
    for(int i=0;i<v[n].size();i++){
        if(visit2[v[n][i]]||depth[v[n][i]]<d)
            continue;
        cnt++;
        Move(v[n][i]);
    }
}
int main(){
    scanf("%d %d %d",&n,&s,&d);
    int x,y;
    for(int i=1;i<n;i++){
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(s);
    Move(s);
    printf("%d",cnt*2);
}