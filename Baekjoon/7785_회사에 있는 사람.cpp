#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<set>
using namespace std;
set<string> s;
vector<string> v;
int n;
string a,b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        if(s.find(a)==s.end())
        s.insert(a);
        else s.erase(a);
    }
    for(auto it = s.begin(); it != s.end(); it++)
       v.push_back(*it);
    sort(v.begin(),v.end(),greater<string>());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<'\n';
}