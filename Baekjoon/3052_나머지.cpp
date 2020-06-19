#include<stdio.h>
int a,arr[1004],cnt;
int main(){
    for(int i=1;i<=10;i++){
        scanf("%d",&a);
        arr[a%42]++;
    }
    for(int i=0;i<=1000;i++)
    if(arr[i])
    cnt++;
    printf("%d",cnt);
}