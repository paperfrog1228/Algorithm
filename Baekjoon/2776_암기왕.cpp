#include<stdio.h>
int t,n,m,arr[1000004],sort[1000004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(arr[i]<arr[j])
    sort[k++]=arr[i++];
    else
    sort[k++]=arr[j++];
    while(i<=m)
    sort[k++]=arr[i++];
    while(j<=r)
    sort[k++]=arr[j++];
    for(int a=l;a<=r;a++)
    arr[a]=sort[a];
}
void MergeSort(int l,int r){
    if(l>=r)
    return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
bool flag=false;
void BST(int l,int r,int s){
    if(l>r) return;
    int m=(l+r)/2;
    if(arr[m]==s){
        flag=true;
        return;
    }
    if(arr[m]>s)
        BST(l,m-1,s);
    if(arr[m]<s)
        BST(m+1,r,s);    
}
void Testcase(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    MergeSort(1,n);
    scanf("%d",&m);
    int tmp;
    for(int i=1;i<=m;i++){
        flag=false;
        scanf("%d",&tmp);
        BST(1,n,tmp);
        if(flag)
        printf("1\n");
        else
        printf("0\n");
    }
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Testcase();
}