#include<stdio.h>
#include<iostream>
using namespace std;
int n,m,bit[100010],a,b,c,check[8388608],cnt;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&a,&b);
        if(a==1){
            scanf("%d",&c);
            bit[b]|=(1<<c);
        }
        if(a==2){
            scanf("%d",&c);
            bit[b]&=~(1<<c);
        }
        if(a==3){
            bit[b]=bit[b]<<1;
            bit[b]&=~(15<<21);        
        }
        if(a==4){
            bit[b]=bit[b]>>1;
            bit[b]&=~1;
        }
    }
    for(int i=1;i<=n;i++){
        if(check[bit[i]])
            continue;
        check[bit[i]]++;
        cnt++;
    }
    printf("%d",cnt);
}