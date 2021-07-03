#include<iostream>
char s[1010];
int i=0;
int main(){
    scanf("%s",s);
    while(s[i]!='\0') {
        int n=s[i]-3;
        if(n<'A') n+=26;
        printf("%c",n);
        i++;
    }
}