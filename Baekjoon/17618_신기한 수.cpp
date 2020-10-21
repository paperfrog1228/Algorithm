#include <stdio.h>
int n,c;
bool fun(int n){
    int t=n,a=0;
    while(t>0){
        a+=t%10;
        t/=10;
    }
    if(n%a==0) return true;
    return false;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(fun(i))c++;
    printf("%d",c);
}