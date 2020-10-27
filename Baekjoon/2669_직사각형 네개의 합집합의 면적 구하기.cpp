#include <stdio.h>
int x[2],y[2],map[103][103],cnt;
int main(){
    for(int i=1;i<=4;i++){
        scanf("%d %d %d %d",&x[0],&y[0],&x[1],&y[1]);
        for(int i=x[0];i<x[1];i++)
        for(int j=y[0];j<y[1];j++)
        map[i][j]++;
    }
    for(int i=0;i<=100;i++)
    for(int j=0;j<=100;j++)
    if(map[i][j]) cnt++;
    printf("%d",cnt);
}