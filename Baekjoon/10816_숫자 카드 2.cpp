#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,arr[500005],temp,cnt;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    sort(arr+1,arr+n+1);
    scanf("%d",&m);
    for(int i=1;i<m;i++){
        scanf("%d",&temp);
        printf("%d ",upper_bound(arr+1,arr+n+1,temp)-lower_bound(arr+1,arr+n+1,temp));
    }
        scanf("%d",&temp);
        printf("%d",upper_bound(arr+1,arr+n+1,temp)-lower_bound(arr+1,arr+n+1,temp));
}