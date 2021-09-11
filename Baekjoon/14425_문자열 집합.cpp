#include<string>
#include<iostream>
#include<map>
using namespace std;
int n,m,ans;
string s;
map<string, int> mp;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        cin>>s;
        mp[s]++;
    }
    for(int i=1;i<=m;i++) {
        cin>>s;
        if(mp.find(s)!=mp.end()) ans++;
    }
    cout<<ans;
}