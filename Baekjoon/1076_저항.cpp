#include<iostream>
#include<string>
#include<math.h>
using namespace std;
string r[10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
int main(){
    long long ans=0;
    string temp;
    cin>>temp;
    for(int i=0;i<10;i++)
        if(temp==r[i])
            ans+=i;
    cin>>temp;
    for(int i=0;i<10;i++)
        if(temp==r[i]){
            ans*=10;
            ans+=i;
        }
    cin>>temp;
    for(int i=0;i<10;i++)
        if(temp==r[i])
            ans*=pow(10,i);
        
    cout<<ans;
}