#include<stdio.h>
int n;
long long int s=5;
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        s=(s+i*5-((i-1)*2+1))%45678;
    printf("%lld",s%45678);
}