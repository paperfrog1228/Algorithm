#include<bits/stdc++.h>
using namespace std;
string s,ans;
int main(){
   cin>>s;
   int i=s.size()-1;
   while(i>=0){
       int tmp=0;
       if(i-2>=0&&s[i-2]=='1') tmp+=4;
       if(i-1>=0&&s[i-1]=='1') tmp+=2;
       if(s[i]=='1') tmp+=1;
       ans+=to_string(tmp);
       i-=3;
   }
   reverse(ans.begin(),ans.end());
   cout<<ans;
}