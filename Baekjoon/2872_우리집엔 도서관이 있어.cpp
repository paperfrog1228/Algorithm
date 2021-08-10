#include<stdio.h>
int n,a[300003],cnt;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    cnt=n;
    for(int i=n;i>0;i--) if(a[i]==cnt) cnt--;
    printf("%d",cnt);
}