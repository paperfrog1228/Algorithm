#include<iostream>
#define ll long long 
ll a[100004],sum;
int n,s,l,r,ans=999999999;
int main(){
    scanf("%d %d",&n,&s);
    for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
    l=1,r=1,sum=a[l];
    while(l<=r&&r<=n){
        if(sum<s&&r<n) r++,sum+=a[r];
        else if(sum>=s) {
            if (ans>r-l+1) ans=r-l+1;
            if (l<=r) 
                sum-=a[l],l++;
        }
        else break;
    }
    if(ans==999999999) ans=0;
    printf("%d",ans);
}
