#include<stdio.h>
int n,arr[100004],tmp[100004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(arr[i]>arr[j])
    tmp[k++]=arr[i++];
    else
    tmp[k++]=arr[j++];
    while(i<=m)
    tmp[k++]=arr[i++];
    while(j<=r)
    tmp[k++]=arr[j++];
    for(int a=l;a<=r;a++)
    arr[a]=tmp[a];
}
void MergeSort(int l, int r){
    if(l>=r) return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    MergeSort(1,n);
    int time=arr[1],cnt=time+1;
    for(int i=2;i<=n;i++){
        time--;
        if(time<arr[i]){
            cnt+=(arr[i]-time);
            time=arr[i];
        }
    }
    printf("%d",cnt+1);
}