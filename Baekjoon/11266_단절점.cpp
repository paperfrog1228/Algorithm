#include<bits/stdc++.h>
using namespace std; 
int v,e;
vector<int> graph[10010],ans;
int discovered[10002];
bool isCut[10002];
int number;
int dfs(int here, bool isRoot){
    discovered[here] = ++number; 
    int ret=discovered[here];
    int child=0;
    for (int i=0;i<graph[here].size();i++){
        int next=graph[here][i];
        if (discovered[next]){
            ret=min(ret,discovered[next]);
            continue;
        }
        child++;
        int prev = dfs(next, false);
        if (!isRoot && prev >= discovered[here])
            isCut[here]=true;
        ret = min(ret, prev);
    }
    if (isRoot&&child>=2)
        isCut[here]=true;
    return ret;
}
int main(){
    scanf("%d %d",&v,&e);
    int a,b;
    while(e--){
        scanf("%d %d",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=v;i++)
        if(!discovered[i]) dfs(i,true);
   int cnt = 0;
    for (int i = 1; i <= v; i++)
        if (isCut[i])
            cnt++;
 
    printf("%d\n", cnt);
    for (int i = 1; i <= v; i++)
        if (isCut[i])
            printf("%d ", i);
}
