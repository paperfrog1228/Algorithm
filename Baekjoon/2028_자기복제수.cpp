#include <stdio.h>
int t,n;
bool fun(int n){
    int t=n*n,ten=10000000;
    while(ten>0){
        if(t%ten==n)
        return true;
        ten/=10;
    }
    return false;
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(fun(n))
        printf("YES\n");
        else printf("NO\n");
    }
}