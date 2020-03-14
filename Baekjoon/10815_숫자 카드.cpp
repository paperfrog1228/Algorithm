#include <stdio.h>
#include <algorithm>
int n,m,temp,arr[500050];
int Get(int t,int left,int right){
    if(left>right)
        return 0;
    int mid=(left+right)/2;
    if(t==arr[mid])
        return 1;
    if(t<arr[mid])
    return Get(t,left,mid-1);
    return Get(t,mid+1,right);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    std::sort(arr,arr+n);
    scanf("%d",&m);
    for(int i=1;i<m;i++){
        scanf("%d",&temp);
        printf("%d ",Get(temp,0,n-1));
    }
    scanf("%d",&temp);
    printf("%d",Get(temp,0,n-1));
}