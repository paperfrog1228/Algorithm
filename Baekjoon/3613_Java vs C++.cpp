#include<string>
#include<iostream>
#include<vector>
using namespace std;
bool C=true,JAVA=true;
string s,tmp;
vector<string> v;
int main(){
    cin>>s;
    string tmp="";
    if(s[0]<'a'||s[0]=='_') C=false,JAVA=false;
    if(s[s.size()-1]=='_') C=false,JAVA=false;
    for(auto c:s){
        if(c=='_') {
            if(tmp=="") C=false,JAVA=false;
            JAVA=false;
            v.push_back(tmp);
            tmp="";
        }
        else if(c<'a') {
            C=false;
            v.push_back(tmp);
            tmp="";
            tmp+=c;
        }
        else tmp+=c;
    }
    v.push_back(tmp);
    if(!C&&!JAVA){
        cout<<"Error!";
        return 0;
    }
    else if(C){
       cout<<v[0];
        for(int i=1;i<v.size();i++){
            v[i][0]-=32;
            cout<<v[i];
        }
    }
    else if(JAVA){
        cout<<v[0];
        for(int i=1;i<v.size();i++){
            cout<<"_";
            v[i][0]+=32;
            cout<<v[i];
        }
    }
}