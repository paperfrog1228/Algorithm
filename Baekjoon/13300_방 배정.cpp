#include<stdio.h>
int n,k,s,y,c[2][7],a;
int main(){
    scanf("%d %d",&n,&k);
    while(n--){
        scanf("%d %d",&s,&y);
        c[s][y]++;
        if(c[s][y]==k) c[s][y]=0,a++;
    }
    for(int i=0;i<=1;i++)
    for(int j=1;j<=6;j++)
        if(c[i][j]) a++;
    printf("%d",a);
}