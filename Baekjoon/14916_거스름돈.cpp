#include<stdio.h>
int n,i,ans=987654321;
int main(){
    scanf("%d",&n);
    while(n-(5*i)>=0){
        int tmp=n-(5*i);
        if(tmp%2==0){
            if(ans>i+tmp/2) ans=i+tmp/2;
        }
        i++;
    }
    if(ans==987654321) ans=-1;
    printf("%d",ans);
}