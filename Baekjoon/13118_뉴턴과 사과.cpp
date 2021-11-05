#include<stdio.h>
int p[5],x,y;
int main(){
    for(int i=1;i<=4;i++) scanf("%d",&p[i]);
    scanf("%d %d %d",&x,&y,&y);
    for(int i=1;i<=4;i++) 
        if(p[i]==x) { printf("%d",i); return 0;}
    printf("0");
}