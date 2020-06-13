#include <stdio.h>
int t,n,arr[101],temp[101];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(arr[i]<arr[j])
    temp[k++]=arr[i++];
    else
    temp[k++]=arr[j++];
    for(;i<=m;i++)
    temp[k++]=arr[i];
    for(;j<=r;j++)
    temp[k++]=arr[j];
    for(int x=l;x<=r;x++)
    arr[x]=temp[x];
}
void MergeSort(int l,int r){
    if(l>=r)
    return;
    int m=(l+r)/2;
    MergeSort(l, m);
    MergeSort(m+1, r);
    Merge(l, m, r);
}
void TestCase(){
    int ans=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        MergeSort(1,n);
        arr[1]+=arr[2];
        ans+=arr[1];
        arr[2]=999999999;
    }
    printf("%d\n",ans);
}
int main(){
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
   TestCase();
}