#include<bits/stdc++.h>
using namespace std;
int n,k;
double ans1,ans2;
int main(){
    scanf("%d %d",&n,&k);
    vector<double> v(n);
    for(int i=0;i<n;i++) scanf("%lf",&v[i]);
    sort(v.begin(),v.end());
    for(int i=k;i<n-k;i++) ans1+=v[i];
    ans1=round(ans1/(double)(n-2*k)*100)/100;
    for(int i=0;i<k;i++) ans2+=v[k];
    for(int i=k;i<n-k;i++) ans2+=v[i];
    for(int i=n-k;i<n;i++) ans2+=v[n-k-1];
    ans2=round(ans2/(double)n*100)/100;
    printf("%.2lf\n%.2lf",ans1,ans2);
}
