#include<stdio.h>
int n,a,b,x;
int main() {
    scanf("%d",&n);
    while(n--)
        scanf("%d",&x),a+=10,b+=15,a+=x/30*10,b+=x/60*15;
    if(a==b) printf("Y M %d",a);
    else printf("%c %d",a<b?'Y':'M',a<b?a:b);
}