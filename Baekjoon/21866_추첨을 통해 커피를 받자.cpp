#include<stdio.h>
int a[9],sum;
int main(){
    for(int i=0;i<9;i++) scanf("%d",&a[i]),sum+=a[i];
    for(int i=0;i<9;i++)
    if(a[i]>100*((i+2)/2)){
        printf("hacker");
        return 0;
    }
    if(sum<100) printf("none");
    else printf("draw");
}
