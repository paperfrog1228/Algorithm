#include<bits/stdc++.h>
using namespace std;
int t,n,m,discovered[100010],finished[100010],sccId[100010],degree[100010],counter,sccCounter;
vector<vector<int>> adj;
stack<int> st;
int scc(int here){
    int ret=discovered[here]=++counter;
    st.push(here);
    for(int i:adj[here]){
        if(!discovered[i]) ret=min(ret,scc(i));
        else if(!finished[i]) ret=min(ret,discovered[i]);
    }
    if(ret==discovered[here]){
        sccCounter++;
        while(1){
            int t=st.top();st.pop();
            finished[t]++;
            sccId[t]=sccCounter;
            if(here==t) break;
        }
    }
    return ret;
}
void solution(){
    int ans=0;
    counter=sccCounter=0;
    stack<int> tmp;swap(st,tmp);
    scanf("%d %d",&n,&m);
    adj.assign(n+1,vector<int>());
    int a,b;
    while(m--){
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
    }
    for(int i=1;i<=n;i++) if(!discovered[i]) scc(i);
    for(int i=1;i<=n;i++)
        for(int j:adj[i])
            if(sccId[i]!=sccId[j])
                degree[sccId[j]]++;
    for(int i=1;i<=sccCounter;i++)
            if(degree[i]==0)
                ans++;
    printf("%d\n",ans);
    for(int i=1;i<=n;i++) discovered[i]=sccId[i]=finished[i]=degree[i]=0;
}
int main(){
    scanf("%d",&t);
    while(t--) solution();
}
