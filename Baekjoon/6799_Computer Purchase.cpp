#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n,r,s,d;
vector<pair<int,string>> v;
string st;
int main(){
    cin>>n;
    while(n--)
        cin>>st>>r>>s>>d,
        v.push_back({-1*(2*r+3*s+d),st});
    sort(v.begin(),v.end());
    if(v.size()>0) cout<<v[0].second<<endl;
    if(v.size()>1) cout<<v[1].second;
}