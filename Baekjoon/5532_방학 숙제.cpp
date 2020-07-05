#include<stdio.h>
int main(){
    int a[6],ko,ma,ans;
    for(int i=1;i<=5;i++)
    scanf("%d",&a[i]);
    ko=a[2]/a[4];
    if(a[2]%a[4]!=0)
    ko++;
    ma=a[3]/a[5];
    if(a[3]%a[5]!=0)
    ma++;
    ko>ma?ans=a[1]-ko:ans=a[1]-ma;
    printf("%d",ans);
}