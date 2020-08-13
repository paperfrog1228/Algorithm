#include<stdio.h>
int n,a[30004],tmp,cnt,max;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    tmp=a[1];
    for(int i=2;i<=n;i++){
        if(tmp>a[i])
            cnt++;
        else cnt=0,tmp=a[i];
        if(max<cnt) 
        max=cnt;
    }
    printf("%d",max);
}