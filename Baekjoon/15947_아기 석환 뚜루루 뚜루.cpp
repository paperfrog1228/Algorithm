#include<stdio.h>
int main(){
    int n,mod;
    scanf("%d",&n);
    mod=n%14;
    if(mod==1||mod==13)
        printf("baby");
    if(mod==2||mod==0)
        printf("sukhwan");
    if(mod==3||mod==7||mod==11){
        printf("tu");
        if(n/14>=3)
        printf("+ru*%d",n/14+2);
        else
        for(int i=1;i<=n/14+2;i++)
        printf("ru");
    }
    if(mod==4||mod==8||mod==12){
        printf("tu");
        if(n/14>=4)
        printf("+ru*%d",n/14+1);
        else
        for(int i=1;i<=n/14+1;i++)
        printf("ru");
    }
    if(mod==5)
    printf("very");
    if(mod==6)
    printf("cute");
    if(mod==9)
    printf("in");
    if(mod==10)
    printf("bed"); 
}