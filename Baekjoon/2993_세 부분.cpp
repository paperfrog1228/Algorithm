#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector<string> v;
string s,a,b,c;
int main(){
    cin>>s;
    for(int i=1;i<s.size()-1;i++)
    for(int j=i+1;j<s.size();j++){
        a=s.substr(0,i);
        b=s.substr(i,j-i);
        c=s.substr(j,s.size());
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        reverse(c.begin(),c.end());
        v.push_back(a+b+c);
    }
    sort(v.begin(),v.end());
    cout<<v[0];
}