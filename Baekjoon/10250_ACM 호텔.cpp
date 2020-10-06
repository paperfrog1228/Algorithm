#include<stdio.h>
int t,h,w,n,a;
void testcase(){
    scanf("%d %d %d",&h,&w,&n);
    if(n%h!=0)
    printf("%d\n",n%h*100+n/h+1);
    else
    printf("%d\n",h*100+n/h);
}
int main(){
    scanf("%d",&t);
    while(t>0)
    testcase(),t--;
}