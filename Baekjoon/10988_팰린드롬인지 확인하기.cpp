#include<stdio.h>
int main(){
    char s[200];
    scanf("%s",s);
    int i=0;
    while(s[i]!='\0')
        i++;
    for(int j=0;j<=i/2+1;j++){
        if(s[j]!=s[i-j-1]){
            printf("0\n");
            return 0;
        }
    }
    printf("1");
}