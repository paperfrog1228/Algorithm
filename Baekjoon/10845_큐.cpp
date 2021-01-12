#include<iostream>
#include<queue>
#include<string>
using namespace std;
int n,a,out,back=-1;
queue<int> q;
string s;
int main(){
    scanf("%d",&n);
    while(n>0){
        n--;
        cin>>s;
        if(s=="push"){
            cin>>a;
            back=a;
            q.push(a);
            continue;
        }
        if(s=="pop"){
            if(q.empty())
            out=-1;
            else out=q.front(),q.pop();
        }
        if(s=="size")
        out=q.size();
        if(s=="empty"){
            if(q.empty())
            out=1;
            else out=0;
        }
        if(s=="front"){
            if(q.empty())
            out=-1;
            else
            out=q.front();
        }
        if(s=="back"){
            if(q.empty())
            out=-1;
            else
            out=back;
        }
        cout<<out<<'\n';
    }
}