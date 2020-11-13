#include <stdio.h>
int n;
char s[20];
int main(){
    scanf("%d",&n);
    while(n>0){
        int a[11]={0,},j=0,b=0;
        scanf("%s",s);
        while(s[j]!='\0')
            a[s[j]-'0']++,j++;
        for(int i=0;i<=9;i++)
            if(a[i])b++;
        printf("%d\n",b);
        n--;
    }
}