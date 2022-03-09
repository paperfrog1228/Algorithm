#include <iostream>
#include<string>
#include<map>
using namespace std;
int t,n;
string s1,s2;
map<string,int>::iterator i;
int main() {
    cin>>t;
    while(t--){
        map<string,int> mp;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s1>>s2;
            if(mp[s2]==0)
                mp[s2]=2;
            else
            mp[s2]++;
        }
        long long cnt=1;
        for(i=mp.begin();i!=mp.end();i++)
            cnt*=i->second;
        cnt--;
        printf("%lld\n",cnt);
    }
}
