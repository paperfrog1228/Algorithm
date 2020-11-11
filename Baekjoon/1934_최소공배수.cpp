#include<stdio.h>
int t,a,b;
int gcd(int a,int b){ return b==0?a:gcd(b,a%b);};
int lcm(int a,int b){ return a*b/gcd(a,b);};
int main(){
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d",&a,&b);
        printf("%d\n",lcm(a,b));
        t--;
    }
}