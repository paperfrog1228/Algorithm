#include <stdio.h>
float a;
char s[4],g[5]={'F','D','C','B','A'};
int main(){
    scanf("%s",s);
    for(int i=0;i<5;i++)
        if(g[i]==s[0])
            a=(float)i;
    if(s[1]=='+')
    a+=0.3f;
    if(s[1]=='-')
    a-=0.3f;
    printf("%.1f",a);
}