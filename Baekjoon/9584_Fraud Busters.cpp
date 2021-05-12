#include<bits/stdc++.h>
using namespace std;
string s;
char tmp[9];
int n;
char scan[9];
vector<string> v;
int main(){
    getline(cin,s);
    int j=0;
    for(int i=0;i<s.size();i++)
    if(s[i]!=' ') scan[j++]=s[i];
    scanf("%d",&n);
    while(n--){
        bool ans=true;
        scanf("%s",tmp);
        for(int i=0;i<=9;i++)
        if(scan[i]!='*'&&scan[i]!=tmp[i]) ans=false;
        if(ans) v.push_back(tmp);
    }
    printf("%d\n",v.size());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
}
