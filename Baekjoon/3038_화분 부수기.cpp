#include<stdio.h>
int n,a,b,c,d[1000010],e;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&c);
        if(!d[a]&&!d[b]&&!d[c]) e++;
        d[a]++;d[b]++;d[c]++;
    }
    printf("%d",e);
}