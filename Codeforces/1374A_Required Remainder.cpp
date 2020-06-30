#include <stdio.h>
int t;
void TestCase(){
    int x,y,n;
    scanf("%d %d %d",&x,&y,&n);
    int k=n/x;
    k*=x;
    if(k+y>n)
    k-=x;
    printf("%d\n",k+y);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}