#include<bits/stdc++.h>
using namespace std;
char ans[110][110];
string s;
int n,r,c,k;
int main(){
    cin>>s;
    n=s.size();
    r=1,c=n;
    for(int i=1;i<=n;i++)
        if(n%i==0&&i<=n/i) r=i,c=n/i;
    for(int j=1;j<=c;j++)
    for(int i=1;i<=r;i++)
        ans[i][j]=s[k],k++;
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++)    
    printf("%c",ans[i][j]);
}
