#include<stdio.h>
#include<algorithm>
using namespace std;
int t,n,m,a[20004],b[20004],ans;
int Search(int n,int l,int r){
    int cnt=0;
    while(l<=r){
        int m=(l+r)/2;
        if(n<=b[m])
            r=m-1;
        else{
            cnt=m;
            l=m+1;
        }
    }
    return cnt;
}
void Testcase(){
    ans=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
    scanf("%d",&b[i]);
    sort(b+1,b+m+1);
    for(int i=1;i<=n;i++)
        ans+=Search(a[i],1,m);
    printf("%d\n",ans);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Testcase();
}