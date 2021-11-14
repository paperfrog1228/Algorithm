#include<iostream>
#include<string>
using namespace std;
int t;
string a,b;
int main(){
    scanf("%d",&t);
    while(t--){
        cin>>a;
        if(a.size()%2==1){
            for(int i=0;i<a.size();i+=2)
                b+=a[i];
            for(int i=1;i<a.size();i+=2)
                b+=a[i];
            cout<<b<<endl;
            b="";
            for(int i=1;i<a.size();i+=2)
                b+=a[i];
            for(int i=0;i<a.size();i+=2)
                b+=a[i];    
            cout<<b<<endl;
            b="";
            continue;
        }
        for(int i=0;i<a.size();i+=2)
            b+=a[i];
        cout<<b<<endl;
        b="";
        for(int i=1;i<a.size();i+=2)
            b+=a[i];
            cout<<b<<endl;
        b="";
    }
}