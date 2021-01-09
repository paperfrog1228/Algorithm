#include <iostream>
#include <algorithm>
#include <vector>
std:: vector<int> v;
int n,t,l,r,mmax=2147483647,ansl,ansr;
int abs(int a,int b){
    int ret=a+b;
    if(ret<0) return -1*ret;
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    l=0,r=n-1;
    while(l<r){
        if(mmax>abs(v[l],v[r]))
            mmax=abs(v[l],v[r]),ansl=v[l],ansr=v[r];
        int a=abs(v[l+1],v[r]);
        int b=abs(v[l],v[r-1]);
        if(a<b) l++;
        else r--;
    }
    printf("%d %d",ansl,ansr);
}