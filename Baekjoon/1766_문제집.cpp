#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>>pq[32005];
int n,m,degree[32005],a,b;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        pq[a].push(b);
        degree[b]++;
    }
    for(int i=1;i<=n;i++)
        if(degree[i]==0)
            pq[0].push(i);
    while(!pq[0].empty()){
        int now=pq[0].top();
        printf("%d ",now);
        pq[0].pop();
        while(!pq[now].empty()){
            int i=pq[now].top();
            pq[now].pop();
            if(--degree[i]==0)
            pq[0].push(i);
        }
    }
}