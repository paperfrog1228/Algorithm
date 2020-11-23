#include <stdio.h>
int ans[2200][2200];
int n;
void rec(int x,int y,int n){
    if(n==1){
        ans[x][y]++;
        return;
    }
    for(int i=1;i<=3;i++)
    for(int j=1;j<=3;j++){
        if(i==2&&j==2) continue;
        rec(x+(n/3)*(i-1),y+(n/3)*(j-1),n/3);
    }
}
int main(){
    scanf("%d",&n);
    rec(1,1,n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        if(ans[i][j]>0)
        printf("*");
        else printf(" ");
        printf("\n");
    }
}