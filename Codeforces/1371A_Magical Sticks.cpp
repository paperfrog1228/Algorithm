#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(n%2==1)
        printf("%d\n",n/2+1);
        else
        printf("%d\n",n/2);
    }
}