#include<iostream>
#include<memory.h>
#include<algorithm>
int n,dp[5050][5050];
using namespace std;
string s;
int go(int l,int r){
    int& ret=dp[l][r];
    if(ret!=-1) return ret;
    ret=987654321;
    if(l>=r) return ret=0;
    if(s[l]==s[r]) ret=min(ret,go(l+1,r-1));
    ret=min(ret,go(l+1,r)+1);
    ret=min(ret,go(l,r-1)+1);
    return ret;
}
int main(){
    memset(dp,-1,sizeof(dp));
    cin>>n>>s;
    cout<<go(0,n-1);
}