#include<iostream>
#include<algorithm>
#include<vector> 
#include<stack>
using namespace std;
vector<string> ans;
vector<pair<int,int>> v;
string s;
stack<int> st;
void dfs(int i,string ss){
    if(i>=v.size()){
        int j=0;
        while(j<ss.size())
            if(ss[j]=='!') ss.erase(j,1);
            else j++;
        ans.push_back(ss);
        return;
    }
    dfs(i+1,ss);
    int a=v[i].first; int b=v[i].second;
    ss[a]=ss[b]='!';
    dfs(i+1,ss);
}
int main(){
    cin>>s;
    int left=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        if(s[i]==')') v.push_back({st.top(),i}),st.pop();
    }
    dfs(0,s);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());	
    for(int i=1;i<ans.size();i++)
    // if(ans[i]!="")
    cout<<ans[i]<<endl;
}