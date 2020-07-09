#include<stdio.h>
int r,c,w,t[33][33];
long long sum;
int main(){
    scanf("%d %d %d",&r,&c,&w);
    t[1][1]=1;
    for(int i=2;i<=r+w;i++){
        for(int j=1;j<=i;j++){
            if(j-1>0)
            t[i][j]+=t[i-1][j-1];
            if(j<i)
            t[i][j]+=t[i-1][j];
        }
    }
    for(int i=r;i<r+w;i++){
        for(int j=0;j<i-r+1;j++)
        sum+=t[i][c+j];
    }
    printf("%lld",sum);
}