#include<stdio.h>
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    if(m==1||m==2)
        printf("NEWBIE!");
    else if(m<=n)
        printf("OLDBIE!");
    else
    printf("TLE!");
}