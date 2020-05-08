#include<stdio.h>
#define Max(a,b)a>b?a:b
int t,n,a;
void TestCase(){
    int tmp=0,max=-10000;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(tmp+a<=0){
            tmp=a;
        max=Max(tmp,max);
            continue;
        }
        tmp=Max(tmp+a,a);
        max=Max(tmp,max);
    }
    printf("%d\n",max);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    TestCase();
}