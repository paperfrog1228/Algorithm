#include<iostream>
#include<string>
using namespace std;
int n,m,k,ans;
string s[55];
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) cin>>s[i];
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        int zero=0;
        int cnt=0;
        for(int j=0;j<m;j++)
        if(s[i][j]=='0') zero++;
        if(zero>k) continue;
        if(k%2!=zero%2) continue;
        for(int j=1;j<=n;j++)
        if(s[i]==s[j]) cnt++;
        if(cnt>ans) ans=cnt;
    }    
    printf("%d",ans);
}