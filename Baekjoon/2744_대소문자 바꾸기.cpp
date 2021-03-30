#include<stdio.h>
char s[110];
int main(){
  scanf("%s",s);
  int i=0;
  while(s[i]!='\0'){
    if(s[i]>'Z') s[i]-=32;
    else s[i]+=32;
    i++;
  }
    printf("%s",s);
}