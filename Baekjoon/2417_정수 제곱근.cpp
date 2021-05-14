#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main(){
    scanf("%lld",&n);
    m=(long long)sqrt(n);
   printf("%lld",m*m==n?m:m+1);
}
