#include <stdio.h>
int n,arr[100004],check[2004],tmp[100004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
        if(arr[i]<arr[j])
        tmp[k++]=arr[i++];
        else
        tmp[k++]=arr[j++];
    for(;i<=m;i++)
    tmp[k++]=arr[i];
    for(;j<=r;j++)
    tmp[k++]=arr[j];
    for(int x=l;x<=r;x++)
    arr[x]=tmp[x];
}
void MergeSort(int left,int right){
    if(right<=left)
        return;
    int mid=(left+right)/2;
    MergeSort(left, mid);
    MergeSort(mid+1, right);
    Merge(left,mid,right);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    MergeSort(1,n);
    for(int i=1;i<=n;i++){
        int tmp=0;
        if(arr[i]<0)
            tmp=-1*arr[i]+1000;
        else
            tmp=arr[i];
        if(check[tmp]==0){
            printf("%d ",arr[i]);
            check[tmp]++;
        }
    }
}