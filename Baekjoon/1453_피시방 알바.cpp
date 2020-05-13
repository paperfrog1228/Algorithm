#include<stdio.h>
int n,a[104],t,cnt=0;
int main(){
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
        scanf("%d",&t);
        if(a[t])
        cnt++;
        else
        a[t]++;
    }
    printf("%d",cnt);
}