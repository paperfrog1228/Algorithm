#include<stdio.h>
int n,arr[1000004],temp[1000004];
void Merge(int A[],int p,int q,int r){
    int i=p;
    int j=q+1;
    int k=p;
    while(i<=q&&j<=r){
        if(A[i]<A[j])
            temp[k++]=A[i++];
        else
            temp[k++]=A[j++];
    }
    for(int l=i;l<=q;l++)
        temp[k++]=A[l];
    for(int l=j;l<=r;l++)
        temp[k++]=A[l];
    for(int l=p;l<=r;l++)
       arr[l]=temp[l];
}
void MergeSort(int A[],int p,int r){
    if(p>=r)
    return;
    int q=(p+r)/2;
    MergeSort(A,p,q);
    MergeSort(A,q+1,r);
    Merge(A,p,q,r);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    MergeSort(arr,1,n);
    for(int i=1;i<=n;i++)
    printf("%d\n",arr[i]);
}