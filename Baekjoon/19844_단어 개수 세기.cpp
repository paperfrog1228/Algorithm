#include <iostream>
#include <string>
using namespace std;
string s;
int n;
int main(){
  getline(cin,s);
  bool start=true;
  for(int i=0;i<s.size();i++){
    if(s[i]==' '||s[i]=='-'){
      n++;
      start=true;
      continue;
    }
    if(!start)
      continue;
    int j=i+1;
    if(s[i]=='q'&&s[i+1]=='u')
      j++;
    else if(s[i]!='c'&&s[i]!='j'&&s[i]!='n'&&s[i]!='m'&&s[i]!='t'&&s[i]!='s'&&s[i]!='l'&&s[i]!='d'&&s[i]!='s'){
      start=false;
      continue;
    }
    if(s[j]!='\''){
      start=false;
      continue;
    }
    if(s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u'||s[j+1]=='h'){
      start=true;
      n++;
    }
 
  }
  printf("%d",n+1);
}