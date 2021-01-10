#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
   getline(cin,s);
   if(s[0]-'0'+s[4]-'0'==s[8]-'0') printf("YES");
   else printf("NO");
}