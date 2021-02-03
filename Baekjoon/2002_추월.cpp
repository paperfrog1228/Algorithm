#include<iostream>
#include<string.h>
#include<map>
using namespace std;
map<int,string> m;
map<string,int> check;
int n,cnt,cur;
string s;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>m[i],check[m[i]]=0;
    cur=1;
    check[m[1]]++;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(s.compare(m[cur])!=0) cnt++,check[s]++;
        else 
            while(cur<=n){
                cur++;
                if(check[m[cur]]==0) break;
            }
    }
    cout<<cnt;
}