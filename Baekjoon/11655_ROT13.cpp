#include<stdio.h>
char s[105];
int main(){
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i]!='\0'){
    int t=s[i];
    if(t>64)
        t+=13;
    if((90<t&&t<104)||122<t)
        t-=26;
    s[i]=t;
    i++;
    }
    printf("%s",s);
}