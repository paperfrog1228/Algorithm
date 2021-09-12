#include <iostream>
#include <regex>
using namespace std;
string s,r;
int n;
int main(){
    cin>>n>>r;
    int i=r.find("*");
    regex re(r.substr(0,i)+"[a-z]*"+r.substr(i+1));
    while (n--){
        cin>>s;
        if(regex_match(s, re))
        cout<<"DA"<<endl;
        else cout<<"NE"<<endl;
    }
}