#include<iostream>
#include<string>
#include<regex>
using namespace std;
int n;
string s;
int main() {
    cin>>n;
    regex r("(100+1+|01)+");
    while(n--){
        cin>>s;
        if(regex_match(s,r))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}