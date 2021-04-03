#include<iostream>
#include<string>
using namespace std;
int n,d=9*9*9*9*9;
string s;
int main(){
    cin>>n;
    while(d>0){
       if(n<d) s+='0';
       else{
        s+=to_string(n/d);
        n-=(n/d)*d;
       }
       d/=9;
    }
    cout<<stoi(s);
}
