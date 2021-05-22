#include<bits/stdc++.h>
#define MAXN 10010
using namespace std;
vector<int> adj[MAXN*2];
int n,m,dfsn[MAXN*2],finished[MAXN*2],sccId[MAXN*2],cnt,sCnt;
stack<int> st;
int scc(int here){
    int ret=dfsn[here]=++cnt;
    st.push(here);
    for(int next:adj[here]){
        if(!dfsn[next]) ret=min(scc(next),ret);
        else if(!finished[next]) ret=min(ret,dfsn[next]);
    }
    if(ret==dfsn[here]){
        vector<int> tmp;
        sCnt++;
        while(1){
            int t=st.top();
            sccId[t]=sCnt;
            st.pop();
            finished[t]++;
            if(t==here) break;
        }
    }
    return ret;
}
int main(){
   scanf("%d %d",&n,&m);
   int a,b,not_a,not_b;
   while(m--){
        scanf("%d %d",&a,&b);
        if(a<0)a=(-a)*2+1,not_a=a-1;
        else a=a*2,not_a=a+1;
        if(b<0)b=(-b)*2+1,not_b=b-1;
        else b=b*2,not_b=b+1;
        adj[not_a].push_back(b);
        adj[not_b].push_back(a);
    }
    for(int i=2;i<=n*2+1;i++)
    if(!dfsn[i]) scc(i);
    for(int i=1;i<=n;i++)
    if(sccId[i*2]==sccId[i*2+1]) {
        printf("0");
        return 0;
    }
    printf("1");
}