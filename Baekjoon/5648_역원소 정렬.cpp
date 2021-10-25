#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<long long> v;
int n;
string s;
int main(){
    cin>>n;
    while(n--){
        cin>>s;
        reverse(s.begin(),s.end());
        if(s.size()<13)
        v.push_back(stol(s));
    }
    sort(v.begin(),v.end());
    for(auto s:v) cout<<s<<endl;
}