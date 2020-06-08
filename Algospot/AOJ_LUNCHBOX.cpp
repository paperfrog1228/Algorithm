#include <stdio.h>
struct lunch{int m;int e;};
lunch L[10004],temp[10004];
int t,n;
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
        if(L[i].e>L[j].e)
        temp[k++]=L[i++];
        else
        temp[k++]=L[j++];
    for(;i<=m;i++)
    temp[k++]=L[i];
    for(;j<=r;j++)
    temp[k++]=L[j];
    for(int x=l;x<=r;x++)
        L[x]=temp[x];
}
void MergeSort(int l,int r){
    if(r<=l)
    return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
void TestCase(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&L[i].m);
    for(int i=1;i<=n;i++)
        scanf("%d",&L[i].e);
    MergeSort(1,n);
    int ans=0,tmp=0;
    for(int i=1;i<=n;i++){
        tmp+=L[i].m;
        if(ans<=tmp+L[i].e)
            ans=tmp+L[i].e;
    }
    printf("%d\n",ans);
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
        TestCase();
}