#include<stdio.h>
int n,a,b;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);};
int main(){
    scanf("%d %d",&n,&a);
    while(--n){
        scanf("%d",&b);
        printf("%d/%d\n",a/gcd(a,b),b/gcd(a,b));
    }
}
