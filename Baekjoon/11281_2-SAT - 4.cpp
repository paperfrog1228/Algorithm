#include<bits/stdc++.h>
#define MAXN 10010
using namespace std;
vector<int> adj[MAXN*2];
stack<int> st;
int n,m,dfsn[MAXN*2],finished[MAXN*2],sccid[MAXN*2],cnt,scnt;
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
            sccid[t]=scnt;
            if(t==here) break;
        }
    }
    return ret;
}
int main(){
    scanf("%d %d",&n,&m);
    int a,b,na,nb;
    while(m--){
        scanf("%d %d",&a,&b);
        if(a<0)a=(-a)*2+1,na=a-1;
        else a=a*2,na=a+1;
        if(b<0)b=(-b)*2+1,nb=b-1;
        else b=b*2,nb=b+1;
        adj[na].push_back(b);
        adj[nb].push_back(a);
    }
    for(int i=2;i<=n*2+1;i++) if(!dfsn[i]) findSCC(i);
    for(int i=1;i<=n;i++)
        if(sccid[i*2]==sccid[i*2+1]){
            printf("0");
            return 0;
        }
    printf("1\n");
    for(int i=1;i<=n;i++)
    printf("%d ",sccid[i*2]<sccid[i*2+1]);
}
