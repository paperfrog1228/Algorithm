#include<stdio.h>
int n,r,e,c;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d",&r,&e,&c);
        if(e-c>r)
        printf("advertise\n");
        else if(e-c==r)
        printf("does not matter\n");
        else
        printf("do not advertise\n");
    }
}