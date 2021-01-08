#include <iostream>
int n;
char s[22];
int main(){
    scanf("%d",&n);
    while(n>0){
        scanf("%s",s);
        int i=0;
        while(s[i]!='\0'){
            if(s[i]<'a')
            s[i]+=32;
            printf("%c",s[i]);
            i++;
        }
        n--;
        printf("\n");
    }
}