#include<iostream>
#include<string>
using namespace std;
string l,r;
int ans;
bool change=false;
int main(){
    cin>>l>>r;
    if(l.size()!=r.size()){
        printf("0");
        return 0;
    }
    for(int i=0;i<l.size();i++){
        if(l[i]!=r[i]) change=true;
        if(change) break;
        if(l[i]=='8'&&r[i]=='8')
            ans++;
    }
    printf("%d",ans);
}