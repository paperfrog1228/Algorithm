#include<iostream>
#include<string>
using namespace std;
int n,cnt;
string s;
int main(){
    getline(cin,s);
    while(1){
        getline(cin,s);
        if(s=="고무오리 디버깅 끝") break;
        if(s=="문제") cnt++;
        else{
            if(cnt==0) cnt+=2;
            else cnt--;
        }
    }
    if(cnt)
    cout<<"힝구";
    else
    cout<<"고무오리야 사랑해";
} 