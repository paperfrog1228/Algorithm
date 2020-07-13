#include<stdio.h>
int n;
long long a[16]={4,9};
long long int sqrt(long long n){
    long long int ret=1;
    for(int i=1;i<=n;i++)
        ret*=2;
    return ret;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        a[i]=a[i-1]+(5*sqrt(2*(i-1))-2*(sqrt(i-1)*(sqrt(i-1)-1)));
    printf("%lld",a[n]);
}