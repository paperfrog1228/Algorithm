#include <iostream>
#include <string>
#include <algorithm>
int n,k,mmax;
using namespace std;
int main(){
    scanf("%d %d",&n,&k);
    for(int j=1;j<=k;j++){
        int c=n*j;
        string s=to_string(c);
        reverse(s.begin(),s.end());
        if(mmax<atoi(s.c_str()))
        mmax=atoi(s.c_str());
    }
    printf("%d",mmax);
}