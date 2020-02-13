#include<stdio.h>
int main(){
    int r,b,n,m,l,w;
    scanf("%d %d",&r,&b);
    int temp=(r-4)/2;
    for(n=1;n<=temp;n++){
            m=temp-n;
        if((m*n)==b){
            m>=n?(l=m,w=n):(l=n,w=m);
            printf("%d %d\n",l+2,w+2);
            return 0;            
        }
    }
}