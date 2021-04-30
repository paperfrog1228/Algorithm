#include<bits/stdc++.h>
using namespace std;
int v,e,discovered[10010],sccId[10010],finished[10010],sccCounter=1,vertexCounter;
vector<int> adj[10010];
vector<vector<int>> ans;
stack<int> st;
int scc(int here){
    int ret=discovered[here]=++vertexCounter;
    st.push(here);
    for(int i=0;i<adj[here].size();i++){
        int next=adj[here][i];
        if(!discovered[next])
            ret=min(ret,scc(next));
        else if(!finished[next])
            ret=min(ret,discovered[next]);
    }
    if(ret==discovered[here]){
        vector<int> tmp;
        while(1){
            int t=st.top();
            tmp.push_back(t);
            sccId[t]=sccCounter;
            st.pop();
            finished[t]++;
            if(t==here) break;
        }
        sort(tmp.begin(),tmp.end());
        ans.push_back(tmp);
        sccCounter++;
    }
    return ret;
}
int main(){
    scanf("%d %d",&v,&e);
    int a,b;
    while(e--)
        scanf("%d %d",&a,&b),
        adj[a].push_back(b);
    for(int i=1;i<=v;i++)
    if(!discovered[i]) scc(i);
    printf("%d\n",sccCounter-1);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        printf("%d ",ans[i][j]);
        printf("-1\n");
    }
}
