#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
  getline(cin,s);
  if(s.find("d2")!=-1||s.find("D2")!=-1) printf("D2");
  else printf("unrated");
}