#include<stdio.h>
int n,m,a[104],min=4000000,ans=0;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++)
    for(int k=j+1;k<=n;k++){
        int sum=a[i]+a[j]+a[k];
        if(sum>m)
        continue;
        if(m-sum<min){
            min=m-sum;
            ans=sum;
        }
    }
    printf("%d",ans);
}