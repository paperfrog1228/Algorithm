#include<stdio.h>
int a[4],c=987654321;
long long t1,t2;
void max(int n){
    if(c>n)
    c=n;
}
int abs(int n){
    if(n<0) n*=-1;
    return n;
}
int main(){
    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);
    max(abs(a[0]+a[1]-a[2]-a[3]));
    max(abs(a[0]+a[2]-a[1]-a[3]));
    max(abs(a[0]+a[3]-a[1]-a[2]));
    printf("%d",c);
}