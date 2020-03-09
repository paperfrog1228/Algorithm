#include<stdio.h>
#include<algorithm>
using namespace std;
int l,n,arr[53],a,b,ans=0;
int main(){
    scanf("%d",&l);
    for(int i=0;i<l;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+l);
    scanf("%d",&n);
    if(n<=arr[0]){
        for(int i=1;i<arr[0];i++)
        for(int j=i+1;j<arr[0];j++)
            if(i<=n&&n<=j)
                ans++;
        printf("%d",ans);
        return 0;
    }
    for(int i=0;i<l-1;i++){
        a=arr[i];
        b=arr[i+1];
        if(a<=n&&n<=b)
        break;
    }
    for(int i=a+1;i<b;i++)
    for(int j=i+1;j<b;j++)
        if(i<=n&&n<=j)
            ans++;
    printf("%d",ans);
}