#include<bits/stdc++.h>
#define MAXN 500050
using namespace std;
vector<int> adj[MAXN],scc[MAXN];
queue<int> q;
stack<int> st;
int n,m,s,p,atm[MAXN],rest[MAXN],money[MAXN],dfsn[MAXN],finished[MAXN],sccId[MAXN],dp[MAXN],cnt,scnt,ans;
int findSCC(int here){
    int ret=dfsn[here]=++cnt;
    st.push(here);
    for(auto next:adj[here]){
        if(!dfsn[next]) ret=min(ret,findSCC(next));
        else if(!finished[next]) ret=min(ret,dfsn[next]);
    }
    if(ret==dfsn[here]){
        scnt++;
        while(1){
            int t=st.top();st.pop();
            finished[t]++;
            sccId[t]=scnt;
            money[scnt]+=atm[t];
            if(t==here) break;
        }
    }
    return ret;
}
int main(){
    scanf("%d %d",&n,&m);
    int a,b;
    while(m--) scanf("%d %d",&a,&b),adj[a].push_back(b);
    for(int i=1;i<=n;i++) scanf("%d",&atm[i]);
    scanf("%d %d",&s,&p); 
    findSCC(s);
    while(p--) scanf("%d",&a),rest[sccId[a]]++;
    for(int i=1;i<=n;i++){
        dp[sccId[i]]=money[sccId[i]];
        for(auto next:adj[i]){
            if(sccId[next]==sccId[i]) continue;
            scc[sccId[i]].push_back(sccId[next]);
        }
    }
    q.push(sccId[s]);
    while(!q.empty()){
        int now=q.front();q.pop();
        if(rest[now]) ans=max(ans,dp[now]);
        for(int next:scc[now]){
            if(dp[next]<money[next]+dp[now]){
                dp[next]=money[next]+dp[now];
                q.push(next);
            }
        }
    }
    printf("%d",ans);
}
/*위상정렬 최고의 반례*/
/*
7 9
1 2 
2 3 
3 5 
2 4 
4 1 
2 6 
6 5
7 1
7 3 
10 
12 
8 
16 
1 
5 
100 
1 4
4 3 5 6
*/
