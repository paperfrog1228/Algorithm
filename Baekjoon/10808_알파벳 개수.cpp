#include<stdio.h>
int a[30],i=0;
char s[150];
int main(){
    scanf("%s",s);
    while(s[i]!='\0'){
        a[s[i]-97]++;
        i++;
    }
    for(int i=0;i<26;i++)
    printf("%d ",a[i]);
}
