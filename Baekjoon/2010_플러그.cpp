#include<bits/stdc++.h>
int t,n,ans;
int main(){
    scanf("%d",&t);
    for(int i=1;i<t;i++)
        scanf("%d",&n),
        ans=(ans-1)+n;
    scanf("%d",&n);
    ans+=n;
    printf("%d",ans);
}