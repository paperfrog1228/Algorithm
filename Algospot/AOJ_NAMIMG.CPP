#include <iostream>
#include <vector>
#include <string>
using namespace std;
string fa,ma,str;
vector<int> GetPartialMatch(string &s){
    int m =s.size();
    vector<int> pi(m,0);
    int begin =1,matched=0;
    while(begin+matched<m){
        if(s[begin+matched]==s[matched]){
            ++matched;
            pi[begin+matched-1] = matched;
        }
        else{
            if(matched ==0)
            ++begin;
            else{
                begin+=matched-pi[matched-1];
                matched=pi[matched-1];
            }
        }
    }
    return pi;
}
int main(){
    cin>>fa;
    cin>>ma;
    str=fa+ma;
    vector<int> ans,pi=GetPartialMatch(str);
    int i=str.size();
    while(i>0){
        ans.push_back(i);
        i=pi[i-1];
    }
    for(int i=ans.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";
}