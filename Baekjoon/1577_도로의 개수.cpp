#include<stdio.h>
int n,d,a,t;
int main(){
    scanf("%d %d",&n,&d);
    for(int i=1;i<=n;i++){
        t=i;
        while(t>0){
            if(t%10==d) a++;
            t/=10;
        }
    }
    printf("%d",a);
}