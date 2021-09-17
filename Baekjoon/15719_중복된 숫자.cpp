#include<stdio.h>
int n,x;
long long sum,sum2;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&x),sum+=x,sum2+=i;
    sum2-=n;
    printf("%lld",sum-sum2);
}