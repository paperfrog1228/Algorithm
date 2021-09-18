#include<string>
#include<iostream>
using namespace std;
string s1,s2;
int a,b;
int main(){
    cin>>s1>>s2;
    a=stoi(s1);
    for(int i=2;i<a;i++)
        if(a%i==0){cout<<"No";return 0;}
    b=stoi(s2+s1);
    for(int i=2;i<b;i++)
        if(b%i==0){cout<<"No";return 0;}
    cout<<"Yes";
}