#include<stdio.h>
int t,n,m;
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&n,&m);
        if(n<12||m<4)
            printf("-1\n");
        else
            printf("%d\n",11*m+4);
    }
}