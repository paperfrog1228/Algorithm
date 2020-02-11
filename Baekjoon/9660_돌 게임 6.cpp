#include<stdio.h>
int main(){
    unsigned long long n;
    int arr[7]={0,1,0,1,1,1,1};
    scanf("%lld",&n);
    arr[n%7]==1?printf("SK"):printf("CY");
}