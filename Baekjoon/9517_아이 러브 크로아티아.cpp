#include <stdio.h>
int cur=1,k,n,t,time,dead=210;
char z;
void Next(){
    cur++;
    if(cur==9)
    cur=1;
}
int main(){
    scanf("%d %d",&k,&n);
    cur=k;
    for(int i=1;i<=n;i++){
        scanf("%d %c",&t,&z);
        time+=t;
        if(time>=dead){
            printf("%d",cur);
            return 0;
        }
        if(z=='T')
        Next();
    }
}