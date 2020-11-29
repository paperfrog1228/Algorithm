#include <stdio.h>
char s[1000004];
int i=1,ans,a[2];
int main(){
    scanf("%s",s);
    a[s[0]-'0']++;
    while(s[i]!='\0'){
        if(s[i]!=s[i-1]) a[s[i]-'0']++;
        i++;
    }
    a[0]<a[1]?ans=a[0]:ans=a[1];
    printf("%d",ans);
}