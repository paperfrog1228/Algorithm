#include<iostream>
#include<algorithm>
int n;
double a[10010],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%lf",&a[i]);
    ans=a[1];
    for(int i=2;i<=n;i++){
        a[i]=std::max(a[i],a[i]*a[i-1]);
        ans=std::max(a[i],ans);
    }
    printf("%.3lf",ans);
}