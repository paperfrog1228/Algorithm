#include<stdio.h>
int n,x,y,q[5];
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x==0||y==0) q[0]++;
        else if(x>0&&y>0) q[1]++;
        else if(x<0&&y>0) q[2]++;
        else if(x<0&&y<0) q[3]++;
        else if(x>0&&y<0) q[4]++;
    }
    for(int i=1;i<=4;i++)
        printf("Q%d: %d\n",i,q[i]);
    printf("AXIS: %d",q[0]);
}