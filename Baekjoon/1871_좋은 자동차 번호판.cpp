#include<iostream>
#include<string>
using namespace std;
string s,a,b;
int t,c,d,e;
int main() {
    cin>>t;
    while(t--){
        cin>>s;
        a=s.substr(0,3);
        b=s.substr(4,4);
        c=(a[0]-'A')*26*26+(a[1]-'A')*26+a[2]-'A';
        d=stoi(b);
        e=c-d;
        if(e<0) e*=-1;
        if(e<=100) cout<<"nice"<<endl;
        else cout<<"not nice"<<endl;
    }
}