#include <stdio.h>
int i,tmp,cnt;
char s[1000004];
int main(){
    scanf("%s",s);
    while(s[i]!='\0')
        tmp+=s[i++]-'0';
    while(tmp>9){
        cnt++;
        i=tmp=0;
        while(s[i]!='\0')
            tmp+=s[i++]-'0';
        sprintf(s,"%d",tmp);
    }
    printf("%d\n",cnt);
    if(tmp%3==0)
        printf("YES\n");
    else
        printf("NO\n");
}