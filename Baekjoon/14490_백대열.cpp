#include<stdio.h>
int n,m,g;
char c;
int gcd(int a,int b) {return b==0?a:gcd(b,a%b);}
int main(){
    scanf("%d%c%d",&n,&c,&m);
    g=gcd(n,m);
    printf("%d%c%d",n/g,c,m/g);
}
