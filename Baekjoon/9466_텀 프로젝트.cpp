#include <bits/stdc++.h>
using namespace std;
int t,n,a,discovered[100010],finished[100010],c[100010],counter,ans;
vector<vector<int>> v;
void dfs(int here){
    discovered[here]=++counter;
    for(int i=0;i<v[here].size();i++){
        int there=v[here][i];
        if (!discovered[there]){ 
           c[here] = there; 
           dfs(there); 
        } 
        //이미 방문한 적 있으면서 끝이 안 났으면 사이클이라는 뜻이구나
        else if (!finished[there]) { 
            int i=there;
            while(i!=here){
                ans++;
                i=c[i];  
            }
            ans++; 
        }
    }
    finished[here]++;
}
void solution(){
    counter=ans=0;
    scanf("%d",&n);
    v.assign(n+1,vector<int>());
    for(int i=1;i<=n;i++) {
        scanf("%d",&a);
        v[i].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!discovered[i]) dfs(i);
    }
    printf("%d\n",n-ans);
    for(int i=0;i<=n;i++) discovered[i]=finished[i]=c[i]=0;
}
int main(){
    scanf("%d",&t);
    while(t--) solution();
}
