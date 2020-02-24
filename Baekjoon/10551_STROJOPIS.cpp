#include<stdio.h>
#include <string.h>
int main(){
    int a[8]={0,};
    char s[51];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='1'||s[i]=='Q'||s[i]=='A'||s[i]=='Z')
        a[0]++;
        else if(s[i]=='2'||s[i]=='W'||s[i]=='S'||s[i]=='X')
        a[1]++;
        else if(s[i]=='3'||s[i]=='E'||s[i]=='D'||s[i]=='C')
        a[2]++;
        else if(s[i]=='4'||s[i]=='R'||s[i]=='F'||s[i]=='V'
        ||s[i]=='5'||s[i]=='T'||s[i]=='G'||s[i]=='B')
        a[3]++;
        else if(s[i]=='6'||s[i]=='Y'||s[i]=='H'||s[i]=='N'
        ||s[i]=='7'||s[i]=='U'||s[i]=='J'||s[i]=='M')
        a[4]++;
        else if(s[i]=='8'||s[i]=='I'||s[i]=='K'||s[i]==',')
        a[5]++;
        else if(s[i]=='9'||s[i]=='O'||s[i]=='L'||s[i]=='.')
        a[6]++;
        else
        a[7]++;
    }
    for(int i=0;i<=7;i++)
    printf("%d\n",a[i]);
}