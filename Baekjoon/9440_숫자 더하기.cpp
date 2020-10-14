#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std; 
bool fun(){
    int n,t,i=0,zero=0,a_zero=0,b_zero=0;
    string a="",b="";
    vector<int> v;
    scanf("%d",&n);
    if(n==0) return false;
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(t==0) zero++;
        else v.push_back(t);
    }
    sort(v.begin(),v.end());
    while(i<n-zero){
        if(i%2==0) a+=to_string(v[i]);
        else b+=to_string(v[i]);
        i++;
    }
    if(stol(a)>stol(b)){
        for(int i=1;i<=zero;i++)
            if(i%2==0) a.insert(1,"0");
            else b.insert(1,"0");
    }
    else{
         for(int i=1;i<=zero;i++)
            if(i%2==1) a.insert(1,"0");
            else b.insert(1,"0");
    }
    printf("%ld\n",stol(a)+stol(b));
    return true;
}
int main(){
    while(fun());
}