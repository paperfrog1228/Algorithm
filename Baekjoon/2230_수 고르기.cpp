#include<stdio.h>
#define ABS(n) (n<0?n=-n:n)
int n,s=1,e=1;
long long int m,a[100004],t[100004],ans=9999987654321;
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
        if(a[i]<a[j])
            t[k++]=a[i++];
        else
            t[k++]=a[j++];
    for(;i<=m;i++)
        t[k++]=a[i];   
    for(;j<=r;j++)
        t[k++]=a[j];   
    for(int x=l;x<=r;x++)
        a[x]=t[x];
}
void MergeSort(int l,int r){
    if(r<=l) return;
    int mid=(l+r)/2;
    MergeSort(l, mid);
    MergeSort(mid+1, r);
    Merge(l,mid,r);
}
int main(){
    scanf("%d %lld",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%lld",&a[i]);
    MergeSort(1,n);
    while(e<=n){ 
        long long int d=a[e]-a[s];
        long long int abs=ABS(d);
        if(abs>=m&&s!=e){
            if(abs<ans)
            ans=abs;
            s++;
        }
        else
            e++;
    }
    printf("%lld",ans);
}