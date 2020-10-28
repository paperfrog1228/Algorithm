#include<stdio.h>
char s[13];
int i,b,a;
int main(){
    scanf("%s %d",s,&b);
    while(s[i+1]!='\0') i++;
    int len=i;
    while(i>=0){
        int tmp=s[i];
        if(s[i]>='A')
        tmp-='A',tmp+=10;
        else tmp-='0';
        for(int j=i;j<len;j++)
        tmp*=b;
        a+=tmp;
        i--;
    }
    printf("%d",a);
}