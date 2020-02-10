#include<stdio.h>
#define MAX 10000000
#define MOD 1000
int a,b,d,n,day[MAX+2],birth[MAX+2];
int main(){
    scanf("%d %d %d %d",&a,&b,&d,&n);
    day[0]=1,birth[0]=1;
    for(int i=1;i<=n;i++){
        if(0<=(i-a))
            birth[i]=day[i-a];
        if(0<=(i-b))
            birth[i]=(birth[i]-day[i-b]+MOD)%MOD;
        day[i]=(day[i-1]+birth[i])%MOD;
    }
    printf("%d\n",(day[n]-day[n-d]+MOD)%MOD);
}