#include <stdio.h>
int t,n;
char s[40];
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %s",&n,s);
        int j=0;
        while(s[j]!='\0'){
            for(int k=1;k<=n;k++)
            printf("%c",s[j]);
            j++;
        }
        printf("\n");
    }
}