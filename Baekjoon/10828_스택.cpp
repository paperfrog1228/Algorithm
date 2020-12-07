#include<iostream>
#include<string>
using namespace std;
int n,t,stack[10004],idx;
string s;
int main(){
    cin>>n;
    while(n>0){
        cin>>s;
        if(s=="push"){
            cin>>t;
            stack[idx++]=t;
        }
        if(s=="pop"){
            if(idx==0)
                cout<<-1<<endl;
            else
            cout<<stack[--idx]<<endl;
        }
        if(s=="top"){
            if(idx==0)
                cout<<-1<<endl;
            else
            cout<<stack[idx-1]<<endl;
        }
        if(s=="size")
        cout<<idx<<endl;
        if(s=="empty"){
            if(idx==0)
            cout<<1<<endl;
            else cout<<0<<endl;
        }
        n--;
    }
}