#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
string s;
vector<string> v;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size()-1;j++){
            string a,b,c;
            a=s.substr(0,i+1);
            b=s.substr(i+1,j-i);
            c=s.substr(j+1,s.size()-j);
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            reverse(c.begin(),c.end());
            v.push_back(a+b+c);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0];
}