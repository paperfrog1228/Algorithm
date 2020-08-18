#include<stdio.h>
int a,b,c=1;
int main(){
    scanf("%d %d",&a,&b);
    while(a!=b){
        if(b%10==1)
            b/=10;
        else if(b%2==1||a>b){
            c=-1;
            break;
        }
        else b/=2;
        c++;    
    }
    printf("%d",c);
}