#include<stdio.h>
int n,m;
char map[104][104];
char a[10]={'.','O','-','|','/','\\','^','<','v','>'};
char b[10]={'.','O','|','-','\\','/','<','v','>','^'};
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%s",map[i]);
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    for(int k=0;k<10;k++)
    if(map[i][j]==a[k]){
        map[i][j]=b[k];
        break;
    }    
    for(int j=m-1;j>=0;j--){
    for(int i=0;i<n;i++)
    printf("%c",map[i][j]);
    printf("\n");
    }
}