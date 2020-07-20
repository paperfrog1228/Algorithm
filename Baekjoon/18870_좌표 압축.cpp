#include<stdio.h>
#include <algorithm>
struct Pos{int num;int index;};
int n,ans[1000004],cnt;
Pos a[1000004];
bool cmp(const Pos &p1, const Pos &p2){
    if(p1.num < p2.num)
        return true;
    return false;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i].num);
        a[i].index=i;
    }
    std::sort(a+1,a+n+1,cmp);
    ans[a[1].index]=0;
    for(int i=2;i<=n;i++){
        if(a[i-1].num!=a[i].num)
        cnt++;
        ans[a[i].index]=cnt;
    }
    for(int i=1;i<=n;i++)
    printf("%d ",ans[i]);
}