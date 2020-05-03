#include <stdio.h>
int k,n,m,ans;
int main(){
    scanf("%d %d %d",&k,&n,&m);
    ans=k*n-m;
    if(ans<0)
    ans=0;
    printf("%d",ans);    
}