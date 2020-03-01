#include<stdio.h>
int n,r,c;
char carrot[103][103];
int main(){
    scanf("%d %d %d",&n,&r,&c);
    char temp;
    if((r+c)%2==0)
    temp='v';
    else
    temp='.';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        carrot[i][j]=temp;
        temp=='v'?temp='.':temp='v';
        }
        if(n%2==0)
        temp=='v'?temp='.':temp='v';
    }
   for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++)
    printf("%c",carrot[i][j]);
    printf("\n");}
}