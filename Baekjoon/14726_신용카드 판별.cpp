#include <stdio.h>
int t;
char s[18];
void f(){
    int tmp=0,check=0;
    scanf("%s",s);
    for(int i=15;i>0;i-=2)
        check+=s[i]-'0';
    for(int i=14;i>=0;i-=2)
        tmp=(s[i]-'0')*2,check+=tmp/10+tmp%10;
    if(check%10==0)
    printf("T\n");
    else
    printf("F\n");
}
int main(){
    scanf("%d",&t);
    while(t>0) f(),t--;
}