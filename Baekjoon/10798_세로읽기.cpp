#include <stdio.h>
char s[6][16];
int main(){
    for(int i=1;i<=5;i++)
    scanf("%s",s[i]);
    for(int i=0;i<=15;i++)
    for(int j=0;j<=5;j++)
    if(s[j][i]!=' '&&s[j][i]!='\0') printf("%c",s[j][i]);
}