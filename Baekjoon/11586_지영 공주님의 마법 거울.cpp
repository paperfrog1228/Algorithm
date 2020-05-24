#include<stdio.h>
int n,m;
char s[104][104];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%s",s[i]);
    scanf("%d",&m);
    if(m==1)
    for(int i=1;i<=n;i++)
    printf("%s\n",s[i]);
    if(m==2)
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=0;j--)
        printf("%c",s[i][j]);
        printf("\n");
    }
    if(m==3)
    for(int i=n;i>=1;i--)
    printf("%s\n",s[i]);
}