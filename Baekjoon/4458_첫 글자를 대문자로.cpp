#include<iostream>
#include<string>
using namespace std;
int n;
string s;
int main(){
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        if(s[0]>'Z') s[0]-=32; 
        cout<<s<<endl;
    }
}