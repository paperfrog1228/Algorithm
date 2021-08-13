#include<iostream>
#include<string>
using namespace std;
int n;
string s,a;
int main(){
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    if(s[i]=='J'||s[i]=='A'||s[i]=='V'||s[i]=='A') continue;
    else a+=s[i];
    if(a.size()==0) cout<<"nojava";
    else cout<<a;
}