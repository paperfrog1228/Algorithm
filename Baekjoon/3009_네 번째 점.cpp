#include<stdio.h>
int x[1004],y[1004],a,b;
int main(){
    for(int i=1;i<=3;i++){
        scanf("%d %d",&a,&b);
        x[a]++;y[b]++;
    }
    for(int i=1;i<=1000;i++)
        if(x[i]==1){
        printf("%d ",i);
        break;
        }
    for(int i=1;i<=1000;i++)
        if(y[i]==1){
        printf("%d",i);
        return 0;
        }
}