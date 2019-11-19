#include<iostream>
#include<string>
using namespace std;
int main(){
  string num;
  string ans="0";
  int zero=0;
  int sum=0,temp;
  cin>>num;
  for(int i=0;i<num.size();i++){
    temp=num[i]-48;
    if(temp==0)
    {
      zero++;
      continue;
    }
    for(int j=0;j<ans.size();j++)
    {
      if(temp>=(ans[j]-48))
      {ans.insert(j,to_string(temp));
      break;
      }
    }
     sum+=temp;
  }
  if(zero==0||sum%3!=0)
  cout<<"-1"<<endl;
  else{
  ans.erase(ans.size()-1,1);
  for(int i=0;i<zero;i++)
    ans.append("0");
  cout<<ans<<endl;
  }
	return 0;
}