#include<stdio.h>
int a,b,c,d,p,m,n,i,pp,mm,nn,dog,s1,s2,t1,t2;
int main(){
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&p,&m,&n);
    dog=2; t1=a,t2=c; s1=s2=-1;
    while(i<1000){
        if(i==p) pp+=dog;
        if(i==m) mm+=dog;
        if(i==n) nn+=dog;
        if(i==t1) dog--,s1=i+b;
        if(i==t2) dog--,s2=i+d;
        if(i==s1) dog++,t1=i+a;
        if(i==s2) dog++,t2=i+c;
        i++;
    }
    printf("%d\n%d\n%d",pp,mm,nn);
}