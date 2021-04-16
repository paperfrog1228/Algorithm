#include <bits/stdc++.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
};
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n%d",gcd(a,b),lcm(a,b));
}
