#include<stdio.h>
#define lld long long 
int main(){
    int n,decnum=0;
    lld now=0;
    scanf("%d",&n);
    while(now<=9876543210){
        lld temp=now;
        lld cur=temp%10;
        bool is_decnum=true;
        int add=1;
        temp/=10;
        while(temp>0){
            add*=10;
            if(temp%10<=cur){
                now=temp*add+add;
                is_decnum=false;
            }
            cur=temp%10;
            temp/=10;
        }
        if(is_decnum){
            if(decnum==n){
                printf("%lld",now);
                return 0;
            }
            now++;
            decnum++;
        }
    }
     printf("-1");
}