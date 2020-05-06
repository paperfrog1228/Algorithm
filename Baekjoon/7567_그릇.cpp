#include <stdio.h>
char s[55],tmp='@';
int main(){
    scanf("%s",s);
    int i,a=0;
    while(s[i]!='\0'){
        if(s[i]!=tmp)
            a+=10;
        else a+=5;
        tmp=s[i++];
    }
    printf("%d",a);
}