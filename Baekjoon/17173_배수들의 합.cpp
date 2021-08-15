#include<iostream>
int n,m,k,chk[1010],a[1010];
long long ans;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        scanf("%d",&k);
        int tmp=k;
        while(tmp<=n){
            if(!chk[tmp]) ans+=tmp,chk[tmp]++;
            tmp+=k;
        }
    }
    printf("%lld",ans);
}