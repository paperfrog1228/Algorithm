#include <stdio.h>
int n,j;
char s[51];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        printf("String #%d\n",i);
        j=0;
        while(s[j]!='\0'){
            if(s[j]=='Z')
            printf("A");
            else
            printf("%c",s[j]+1);
            j++;
        }
        printf("\n\n");
    }
}