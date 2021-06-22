#include<bits/stdc++.h>
int n,a[110],x,ans,mx,mxc;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&x),a[x]++;
    for(int i=1;i<=n;i++) if(mx<a[i]) ans=i,mxc=0,mx=a[i]; else if(mx==a[i]) mxc++;
    if(mxc) printf("skipped");
    else printf("%d",ans);
}
