#include <stdio.h>
#define MAX 1000000
int a,b,n,maxi=2,fib[MAX+2]={0,1,2,};
int main(){
    scanf("%d",&n);
    a=1,b=2;
    for(int i=3;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        maxi=i;
        if(fib[i]>=n) break;
    }
    int t=0,tmp;
    while(1){
        for(int i=maxi;i>=1;i--){
            if(fib[i]<=n){
                tmp=fib[i],n-=tmp;
                break;
            }
        }
        if(n==0){
            if(t>0)
                printf("%d",tmp);
            else
                printf("-1");
            return 0;
        }
        t++;
    }
}