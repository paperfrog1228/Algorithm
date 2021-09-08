#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
#include<map> 
using namespace std;
string s,t;
queue<string> q;
map<string,int> mp;
int main(){
    cin>>s>>t;
    q.push(t);
    while(!q.empty()){
        string now=q.front(); q.pop();
        mp[now]++;
        cout<<"sex"<<now<<endl;
        if(now.size()<s.size()) continue;
        if(now==s){
            cout<<1;
            return 0;
        }
        
        if(now[now.size()-1]=='B') {
            now.erase(now.size()-1);
            string r=now;
            reverse(r.begin(),r.end());
            q.push(r);
        }
        else{
            now.erase(now.size()-1);
        q.push(now);
        }
    }
    cout<<0;
}