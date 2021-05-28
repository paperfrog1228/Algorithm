#include<iostream>
#include<algorithm>
#include<memory.h>
#include<string>
#include<vector>
using namespace std;
int t,n,dp[110][110];
string w,s;
int f(int a,int b){
    if(a==w.size()&&b==s.size()) return 1;
    if(a==(w.size()-1)&&w[a]=='*') return 1;
    if(b>=s.size()) return 0;
	int& ret=dp[a][b];
    if(ret!=-1) return ret;
    if(w[a]==s[b]||w[a]=='?') return ret=f(a+1,b+1);
    else if(w[a]=='*') return ret=max(f(a+1,b),f(a,b+1));
    else return ret=0;
}
void solution(){
	cin>>w>>n;
    vector<string> v;
    while(n--){
        memset(dp,-1,sizeof(dp));
        cin>>s;
        if(f(0,0)==1) v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(auto s:v) cout<<s<<endl;
}
int main(){
	cin>>t;
	while(t--) solution();
}
