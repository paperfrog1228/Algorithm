#include<stdio.h>
long long a,b,c,d,e,f;
int main(){
    scanf("%lld %lld %lld",&a,&b,&c);
    scanf("%lld %lld %lld",&d,&e,&f);
    ((a-d)*(a-d)+(b-e)*(b-e))<((c+f)*(c+f))?printf("YES"):printf("NO");
}