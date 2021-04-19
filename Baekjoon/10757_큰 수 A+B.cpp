#include <bits/stdc++.h>
using namespace std;
string a,b,ans;
int i,j,cnt;
int main(){
    cin>>a>>b;
    i=a.size()-1; j=b.size()-1;
    while(i>=0||j>=0){
        int t;
        if(i<0&&j>=0) t=b[j]-'0';
        else if(i>=0&&j<0) t=a[i]-'0';
        else t=a[i]-'0'+b[j]-'0';
        if(cnt) t++;
        if(t>=10) cnt++; else cnt=0;
        ans+=(t%10)+'0';
        i--,j--;
    }
    if(cnt) ans+='1';
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
