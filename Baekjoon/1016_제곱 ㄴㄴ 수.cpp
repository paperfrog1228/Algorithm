#include<stdio.h>
unsigned long long a,b,sqr,temp,num[1000005],i=2;
int main(){
    int cnt=0;
    scanf("%lld %lld",&a,&b);
    while(i*i<=b){
        temp=1;
        sqr=i*i;
        temp=a/sqr;
        if(temp<=0)
        temp=1;
        temp*=sqr;
        while(temp<a)
            temp+=sqr;
        while(temp<=b){
            num[temp-a]=1;
            temp+=sqr;
        }
        i++;
    }
    for(int i=0;i<=b-a;i++){
        if(num[i]==0)
            cnt++;
    }
    printf("%d\n",cnt);
}