#include <stdio.h>
int main(){
    char s[10010];
    int joi=0,ioi=0,i=0;
    scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]=='J'&&s[i+1]=='O'&&s[i+2]=='I')
        joi++;
        if(s[i]=='I'&&s[i+1]=='O'&&s[i+2]=='I')
        ioi++;
        i++;
    }
    printf("%d\n%d",joi,ioi);
}