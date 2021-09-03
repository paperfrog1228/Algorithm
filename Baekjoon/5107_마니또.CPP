#include<iostream>
#include<string>
#include<map>
using namespace std;
int t,n,a,b,c,ans,adj[22][22],vis[22];
string s1,s2;
map<string,int> mp;
void dfs(int i){
    vis[i]++;
    for(int j=1;j<=n;j++)
        if(!vis[j]&&adj[i][j])
    dfs(j);
}
int main(){
    while(++t){
        cin>>n;
        if(n==0) return 0;
        for(int i=1;i<=n;i++){
            cin>>s1>>s2;
            if(mp.find(s1)==mp.end())
                mp[s1]=++c;
            if(mp.find(s2)==mp.end())
                mp[s2]=++c;
            a=mp[s1],b=mp[s2];
            adj[a][b]++;
        }
        for(int i=1;i<n;i++)
            if(!vis[i]) dfs(i),ans++;
        cout<<t<<" "<<ans<<endl;
        mp.clear();c=0;
        for(int i=1;i<=20;i++)
        for(int j=1;j<=20;j++)
        adj[i][j]=0,vis[i]=0;
        ans=0;
    }
}
