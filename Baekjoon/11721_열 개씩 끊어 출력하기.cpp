#include <stdio.h>
int n;
char s[104],i;
int main(){
    scanf("%s",s);
    while(s[i]!='\0'){
        printf("%c",s[i]);
        if((i+1)%10==0&&i+1>=10)
        printf("\n");
        i++;
    }
}