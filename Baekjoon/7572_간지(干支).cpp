#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    scanf("%d",&n);
    n+=(2400-2013),printf("%c%d",'A'+(n+5)%12,(n+9)%10);
}
