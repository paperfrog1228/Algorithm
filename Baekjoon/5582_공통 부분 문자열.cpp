#include<iostream>
#include<string>
using namespace std;
string s1,s2;
int dp[4002][4002],ans;
int main(){
    cin>>s1>>s2;
    for(int i=1;i<=s1.length();i++)
    for(int j=1;j<=s2.length();j++){
        if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            if(ans<dp[i][j])
            ans=dp[i][j];
    }
    cout<<ans;
}