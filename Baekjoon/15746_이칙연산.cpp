#include<stdio.h>
#include<algorithm>
double a,b,c;
int main(){
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%d",(int)std::max(a*b/c,a/b*c));
}