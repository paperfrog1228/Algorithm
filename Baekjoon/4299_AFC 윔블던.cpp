#include<stdio.h>
#include<algorithm>
int a,b;
int main(){
    scanf("%d %d",&a,&b);
    if(a-b<0||(a-b)%2!=0) printf("-1");
    else printf("%d %d",std::max((a+b)/2,a-(a+b)/2),std::min((a+b)/2,a-(a+b)/2));
}