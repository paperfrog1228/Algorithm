#include<stdio.h>
int n,a[3]={300,60,10},c[3];
int main(){
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        c[i]=n/a[i];
        n-=c[i]*a[i];
    }
    if(n!=0){
        printf("-1");
        return 0;
    }
    printf("%d %d %d",c[0],c[1],c[2]);
}