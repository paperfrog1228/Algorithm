#include <stdio.h>
int n,k,a[104],ans=-9999;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]),a[i]+=a[i-1];
    for(int i=k;i<=n;i++)
    if(ans<a[i]-a[i-k]) ans=a[i]-a[i-k];
    printf("%d",ans);
}