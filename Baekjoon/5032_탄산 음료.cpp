#include<stdio.h>
int e,f,c,ans=0,bottle,n;
int main(){
    scanf("%d %d %d",&e,&f,&c);
    bottle=e+f;
    while(bottle>=c){
        ans+=bottle/c;
        n=bottle/c;
        bottle=bottle%c+n;
    }
    printf("%d\n",ans);
}