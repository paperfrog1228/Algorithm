#include<iostream>
#include<string>
using namespace std;
string s;
char ss;
bool p=true,same=true;
int main(){
    cin>>s;
    ss=s[0];
    for(int i=0;i<s.size()/2+1;i++){
        if(s[i]!=s[s.size()-1-i]){
            p=false;
            break;
        }
        if(ss!=s[i]) same=false;
    }
    if(!p) cout<<s.size();
    else if(same) cout<<-1;
    else cout<<s.size()-1;
}