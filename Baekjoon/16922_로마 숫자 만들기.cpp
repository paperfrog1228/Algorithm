#include<stdio.h>
int n,a[1004],b[4]={1,5,10,50},c;
void dfs(int d,int money,int cnt){
    money+=b[d%4];
    if(cnt==n){
        if(!a[money]) c++;
        a[money]++;
        return;
    }
    for(int i=d;i<4;i++)
    dfs(i,money,cnt+1);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<4;i++) dfs(0,0,0);
    printf("%d",c);
}