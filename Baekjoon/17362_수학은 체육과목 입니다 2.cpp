#include<stdio.h>
long long n,a,b;
int ans;
int main(){
    scanf("%lld",&n);
    if(n<=5){
        printf("%lld",n);
        return 0;
    }
    a=n/4;b=n%4;
    if(b==0||b==2)
        a%2==0?ans=2:ans=4;
    if(b==1)
        a%2==0?ans=1:ans=5;
    if(b==3)
        ans=3;
    printf("%d",ans);
}