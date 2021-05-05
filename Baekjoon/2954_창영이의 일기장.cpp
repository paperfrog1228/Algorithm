#include<bits/stdc++.h>
using namespace std;
string s;
char a[5]={'a','e','i','o','u'};
int check[110];
int main(){
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        bool b=false;
        for(int j=0;j<5;j++) if(a[j]==s[i]&&!check[i])b=true;
        if(b) check[i+1]++,check[i+2]++;
    }
    for(int i=0;i<s.size();i++)
    if(!check[i]) printf("%c",s[i]);
}

