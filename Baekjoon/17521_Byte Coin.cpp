#include<stdio.h>
int n,a[18];
long long int w,c;
int main(){
    scanf("%d %lld",&n,&w);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    a[n+1]=0;
    for(int i=1;i<=n;i++)
        if(a[i]<a[i+1])c+=w/a[i],w%=a[i];
        else if(a[i]>a[i+1])w+=a[i]*c,c=0;
    printf("%lld",w);
} 