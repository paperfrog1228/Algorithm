#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,b;
int main() {
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='A') a++;
        else b++;
    if(a==b) s="Tie";
    else
        a>b?s="A":s="B";
    cout<<s;
}
