#include <stdio.h>
char str[20];
int main(){
    scanf("%s",str);
    int i=0,ans=0;
    while(str[i]!='\0'){
        int a=str[i]-65;
        if(a<18)
        ans+=a/3+3;
        else{
            if('P'-65<=a&&a<='S'-65)
                ans+=8;
            else if('T'-65<=a&&a<='V'-65)
                ans+=9;
            else ans+=10;
        }
        i++;
    }
    printf("%d",ans);
}