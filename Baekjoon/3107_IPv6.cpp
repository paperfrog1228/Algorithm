#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
string s,sub,ans;
int zero,cnt=0;
list<string> v;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==':') cnt++;
        if(s[i]==':'&&s[i+1]==':'){
            zero=cnt;
            break;
        }
    }
    int cur=s.find(':');
    int prev=0;
    while(cur!=string::npos){
        sub=s.substr(prev,cur-prev);
        if(sub!="")
        v.push_back(sub);
        prev = cur+1;
        cur=s.find(':',prev);
    }
    sub=s.substr(prev,s.size()-prev);
    if(sub!="") v.push_back(sub);  
    for(auto s:v){
        while(s.size()<4)
        s.insert(0,"0");
        ans+=s;
        ans+=":";
    }
    ans.erase(ans.end()-1);
    if(s[0]==':'&&s[1]!=':')
        ans.insert(0,"0000:");
    if(s[s.size()-1]==':'&&s[s.size()-2]!=':')
        ans+=":0000";
    if(s[0]==':'&&s[1]==':')
       while(ans.size()<39)
        ans.insert(0,"0000:");
    if(s[s.size()-1]==':'&&s[s.size()-2]==':')
    while(ans.size()<39)
        ans+=":0000";
    zero*=5;
    while(ans.size()<39)
        ans.insert(zero,"0000:");

    cout<<ans;
}