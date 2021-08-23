#include<stdio.h>
int n,a[5050],sum[400050],ans;
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++) 
                scanf("%d",&a[i]);
        for(int i=1;i<=n;i++){
                for(int j=1;j<i;j++)
                        if(sum[a[i]-a[j]+200000]) {
                                ans++; break;
                        }
                for(int j=1;j<=i;j++){
                        sum[a[i]+a[j]+200000]++;
                }
        }
        printf("%d",ans);
}