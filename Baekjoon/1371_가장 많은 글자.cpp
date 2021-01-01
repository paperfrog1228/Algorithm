#include<stdio.h>
int a[28],max;
char s[5005];
int main(){
    while(scanf("%s",s)!=EOF){
        int i=0;
        while(s[i]!='\0'){
            a[s[i]-'a']++;
            i++;
        }
    }
    for(int i=0;i<26;i++)
    if(max<a[i]) max=a[i];
    for(int i=0;i<26;i++)
    if(max==a[i])
    printf("%c",i+'a');
}