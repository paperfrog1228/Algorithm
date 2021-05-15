#include<bits/stdc++.h>
using namespace std;
double n;
int t;
string s;
int main() {
    scanf("%d",&t);
    while (t--){
        scanf("%lf",&n);
        getline(cin,s);
        for(int i=0;i<s.size();i++){
        if(s[i]=='@')n*=3;
        else if(s[i]=='#')n-=7;
        else if(s[i]=='%')n+=5;
        }
        printf("%.2f\n", n);
    }
}
