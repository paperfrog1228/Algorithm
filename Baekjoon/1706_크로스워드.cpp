#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int r,c;
char str[21][21];
vector<string> v;
void check(int i,int j){
  
}
int main(){
  scanf("%d %d",&r,&c);
  for(int i=0;i<r;i++)
  scanf("%s",str[i]);
  for(int i=0;i<r;i++){
    string tmp="";
    for(int j=0;j<c;j++){
      if(str[i][j]=='#'){
        if(tmp.length()>1)
          v.push_back(tmp);
        tmp="";
      }
      else
        tmp+=str[i][j];
    }
    if(tmp!=""&&tmp.length()>1)
    v.push_back(tmp);
  }
  for(int i=0;i<c;i++){
    string tmp="";
    for(int j=0;j<r;j++){
      if(str[j][i]=='#'){
        if(tmp.length()>1)
          v.push_back(tmp);
        tmp="";
      }
      else
      tmp+=str[j][i]; 
    }
    if(tmp!=""&&tmp.length()>1)
    v.push_back(tmp);
  }
  sort(v.begin(),v.end());
  cout<<v[0];
}