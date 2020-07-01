#include<stdio.h>
int t;
long long int a,b,c,ans1,ans2;
void Testcase(){
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>=c){
        ans1=-1;
        ans2=b;
    }
    else{
        ans1=1;
        if(a*b>c)
        ans2=b;
        else
        ans2=-1;
    }
    printf("%lld %lld\n",ans1,ans2);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Testcase();
}