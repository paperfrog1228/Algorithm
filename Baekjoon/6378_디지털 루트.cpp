#include <stdio.h>
char s[1004];
int DigitalRoot(int n){
    int t=0;
    while(n>0){
        t+=n%10;
        n/=10;
    }
    return t;
}
int main(){
    while(1){
        scanf("%s",&s);
        if(s[0]=='0')
        return 0;
        int i=0,n=0;
        while(s[i]!='\0'){
            n+=s[i]-48;
            i++;
        }
        while(n>=10)
        n=DigitalRoot(n);
        printf("%d\n",n);
    }
}