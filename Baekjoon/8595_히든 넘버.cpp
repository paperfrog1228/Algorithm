#include <iostream>
#include <string>
using namespace std;
string s;
long long n,tmp,ans;
int main(){
    cin>>n;
    cin>>s;
    for(auto c:s){
        if('0'<=c&&c<='9'){
            if(tmp>0)
            tmp*=10;
            tmp+=c-'0';
        }
        else ans+=tmp,tmp=0;
    }
    ans+=tmp;
    printf("%lld",ans);
}