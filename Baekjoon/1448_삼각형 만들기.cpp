#include<stdio.h>
#include<algorithm>
using namespace std;
int n,arr[1000000+2],ans=-1;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1);
    for(int k=n;k>=3;k--)
    if(arr[k-1]+arr[k-2]>arr[k])
    if(ans<arr[k-1]+arr[k-2]+arr[k])
    ans=arr[k-1]+arr[k-2]+arr[k];
    printf("%d",ans);
}