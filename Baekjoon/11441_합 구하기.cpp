#include <stdio.h>
int n,t,l,r,sum[100010],a;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a),sum[i]=sum[i-1]+a;
    scanf("%d",&t);
    while(t--) scanf("%d %d",&l,&r),printf("%d\n",sum[r]-sum[l-1]);
}
