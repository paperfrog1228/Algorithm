#include<stdio.h>
int n,a,f,b;
int main(){
    while(1){
        a=1;
        scanf("%d",&n);
        if(n==0) return 0;
        for(int i=1;i<=n;i++)
            scanf("%d %d",&f,&b),a*=f,a-=b;
        printf("%d\n",a);
    }
}