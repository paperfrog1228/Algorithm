#include <stdio.h>
int n,p,tmp,check[10000],cnt=1,tmp2;
int main(){
    scanf("%d %d",&n,&p);
    tmp=n;
    check[n]=1;
    while(1){
        tmp=tmp*n%p;
        if(check[tmp]){
            tmp2=tmp;
            break;
        }
        check[tmp]++;
    }
    while(1){
        tmp=tmp*n%p;
        if(tmp==tmp2)
            break;
        cnt++;
    }
    printf("%d",cnt);
}