#include<stdio.h>
char ucpc[1004];
bool check[4];
int main(){
    scanf("%[^\n]s",ucpc);
    int i=0;
    while(ucpc[i]!='\0'){
        if(ucpc[i]=='U')
            check[0]=true;
        if(check[0]&&ucpc[i]=='C')
            check[1]=true;
        if(check[0]&&check[1]&&ucpc[i]=='P')
            check[2]=true;
        if(check[0]&&check[1]&&check[2]&&ucpc[i]=='C')
            check[3]=true;
        i++;
    }   
    if(check[0]&&check[1]&&check[2]&&check[3])
    printf("I love UCPC");
    else
    printf("I hate UCPC");
}