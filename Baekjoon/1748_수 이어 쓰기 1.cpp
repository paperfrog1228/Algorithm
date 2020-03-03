#include<stdio.h>
int main(){
    long long cnt=0,t=1,ld,temp;
    scanf("%lld",&ld);
    temp=ld;
    int n=0;
    while(temp>0){
        temp/=10;
        n++;
    }
    for(int i=1;i<n;i++){
        cnt+=((10*t)-t)*i;
        t*=10;
    }
    cnt+=(ld-t+1)*n;
    printf("%lld",cnt);
}