#include<iostream>
#include<algorithm>
int w,h,x,now,mn;
int ans,a[550];
int main() {
    scanf("%d %d",&h,&w);
    for(int i=1;i<=w;i++)
        scanf("%d",&a[i]);
    for(int i=2;i<w;i++){
        int left=0,right=0;
        for(int j=1;j<i;j++) left=std::max(left,a[j]);
        for(int j=i+1;j<=w;j++) right=std::max(right,a[j]);
        ans+=std::max(0,std::min(left,right)-a[i]);
    }
    printf("%d",ans);
}