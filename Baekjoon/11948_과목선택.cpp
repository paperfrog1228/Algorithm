#include<iostream>
#include<algorithm>
using namespace std;
int ans,a[6];
int main(){
    for(int i=0;i<6;i++) scanf("%d",&a[i]);
    for(int i=0;i<4;i++)
    for(int j=i+1;j<4;j++)
    for(int k=j+1;k<4;k++)
    ans=std::max(ans,a[i]+a[j]+a[k]);
    ans+=max(a[4],a[5]);
    printf("%d",ans);
}
