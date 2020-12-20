#include<iostream>
#include<string>
#include<vector>
using namespace std;
string s;
vector<int> v;
int main(){
    for(int i=1;i<=5;i++){
        cin>>s;
        if(s.find("FBI") != string::npos)
        v.push_back(i);
    }
    if(v.size()==0) {
        printf("HE GOT AWAY!");
        return 0;
    }
    for(int i=0;i<v.size();i++)
    printf("%d ",v[i]);
}
