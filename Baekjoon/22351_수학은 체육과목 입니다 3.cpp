#include<iostream>
#include<string>
using namespace std;
int a,i,ii;
string s;
int main(){
    cin>>s;
    a=s[ii++]-'0';
    while(1){
        string tmp="";
        for(int i=a;i<=2900;i++) {
            tmp+=to_string(i);
            if(tmp==s){
                printf("%d %d",a,i);
                return 0;
            }
        }
        a*=10;
        a+=s[ii++]-'0';
    }
}