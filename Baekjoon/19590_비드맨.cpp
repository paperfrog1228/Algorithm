#include<stdio.h>
int n;
long long a,max,sum;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a);
        sum+=a;
        if(max<a) max=a;
    }
    if(max>sum/2)
        printf("%lld",max-(sum-max));
    else
        printf("%lld",sum%2);
}