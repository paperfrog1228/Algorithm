#include<stdio.h>
int t,arr[10001];
int main(){
    scanf("%d",&arr[0]);
    for(int i=1;i<=arr[0];i++){
        scanf("%d",&t);
        arr[t]++;
    }
    for(int i=1;i<=10000;i++){
        for(int j=1;j<=arr[i];j++)
        printf("%d\n",i);
    }
}