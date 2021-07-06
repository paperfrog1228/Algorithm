#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int check[26],upper[26],ansc[26],mx;
string s;
map<pair<int,int>,int> mp;
void dfs(int i){
    upper[v[i]]++;
    int cnt=0;
    map<pair<int,int>,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        pair<int,int> p=it->first;
        if(upper[p.first]&&upper[p.second]) continue;
        if(!upper[p.first]&&!upper[p.second]) continue;
        cnt+=it->second;
    }
    if(cnt>mx) {
        mx=cnt;
        for(int i=0;i<26;i++) ansc[i]=upper[i];
    }
    for(int j=i+1;j<v.size();j++) dfs(j);
    upper[v[i]]=0;
}
int main(){
    cin>>s;
    check['a'-'a']=check['e'-'a']=check['i'-'a']=check['o'-'a']=check['u'-'a']=check['w'-'a']=check['y'-'a']=100;
    for(int i=0;i<s.size();i++)
        if(!check[s[i]-'a']) v.push_back(s[i]-'a'),check[s[i]-'a']++;
    for(int i=1;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='w'||s[i]=='y') continue;
        if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u'||s[i-1]=='w'||s[i-1]=='y') continue;
        mp[{s[i-1]-'a',s[i]-'a'}]++;
    }
    for(int i=0;i<v.size();i++) dfs(i);
    for(int i=0;i<s.size();i++) if(ansc[s[i]-'a']) s[i]-=32;
    cout<<s;
}