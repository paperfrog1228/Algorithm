#include <stdio.h>
int n=1000,a[3],cnt=0;
void Ten(int n){
        a[0]=0;
    while(n>0){
        a[0]+=n%10;
        n/=10;
    }
}
void Tweleve(int n){
        a[1]=0;
    while(n>0){
        a[1]+=n%12;
        n/=12;
    }
}
void Sixteen(int n){
        a[2]=0;
    while(n>0){
        a[2]+=n%16;
        n/=16;
    }
}
int main() {
    while(n<10000){
        Ten(n);
        Tweleve(n);
        Sixteen(n);
        if(a[0]==a[1]&&a[1]==a[2])
        printf("%d\n",n);
        n++;
    }
}