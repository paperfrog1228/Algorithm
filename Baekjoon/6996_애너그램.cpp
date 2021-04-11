#include<iostream>
#include<string>
using namespace std;
string a,b;
int t;
int main(){
    cin>>t;
    while(t--){
        cin>>a>>b;
        int aa[110];
        for(int i=0;i<105;i++) aa[i]=0;
        if(a.size()!=b.size())
            goto NOT;
        for(int i=0;i<a.size();i++)
            aa[a[i]-'a']++;
        for(int i=0;i<b.size();i++){
            if(aa[b[i]-'a']<=0)
            goto NOT;
            aa[b[i]-'a']--;
        }
        cout<<a<<" & "<<b<<" are anagrams."<<"\n";
        continue;
        NOT:
        cout<<a<<" & "<<b<<" are NOT anagrams."<<"\n";
    }
}
