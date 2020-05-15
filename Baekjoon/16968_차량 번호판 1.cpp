#include<stdio.h>
char s[6];
int Num(char c){
    if(c=='c')
    return 26;
    return 10;
}
int main(){
    scanf("%s",s);
    int i=1,ans=Num(s[0]);
    while(s[i]!='\0'){
        if(s[i-1]==s[i])
        ans*=(Num(s[i])-1);
        else
        ans*=Num(s[i]);
        i++;
    }
    printf("%d",ans);
}