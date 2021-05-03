#include<bits/stdc++.h>
using namespace std;
int n,m,t,a,l,r,ans;
int main(){
    scanf("%d %d %d",&n,&m,&t);
    l=1,r=m;
    while(t--){
        scanf("%d",&a);
        if(l<=a&&a<=r)continue;
        if(a<l) ans+=l-a,l=a,r=l+m-1;
        else if(r<a) ans+=a-r,r=a,l=r-m+1;
    }
    printf("%d",ans);
}
