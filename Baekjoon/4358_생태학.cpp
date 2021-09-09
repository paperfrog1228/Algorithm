#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
map<string,int> mp;
string s;
vector<pair<string,double>> v;
int all;
int main(){
     /*
        while(cin.eof()) 
        getline(cin,s),mp[s]++,all++;
    */ //이건 왜 안됨??
     while(getline(cin,s)) mp[s]++,all++;
    for(auto m:mp){
        double t = (double)m.second/(double)all*100;
        t=round(t*10000)/10000;
        v.push_back({m.first,t});
    }
    sort(v.begin(),v.end());
    cout.precision(4);
    cout<<fixed;
    for(auto s:v){
        cout<<s.first<<" "<<s.second<<endl;
    }
}