#include<stdio.h>
struct P{int age;char name[104];int num;};
P a[100004],t[100004];
int n;
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(a[i].age<a[j].age)
        t[k++]=a[i++];
    else if(a[i].age>a[j].age)
        t[k++]=a[j++];
    else{
        if(a[i].num<a[j].num)
            t[k++]=a[i++];
        else
            t[k++]=a[j++];
    }
    for(;i<=m;i++)
    t[k++]=a[i];
    for(;j<=r;j++)
    t[k++]=a[j];
    for(int x=l;x<=r;x++)
    a[x]=t[x];
}
void Mergesort(int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    Mergesort(l,m);
    Mergesort(m+1,r);
    Merge(l,m,r);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %s",&a[i].age,a[i].name);
        a[i].num=i;
    }
    Mergesort(1,n);
    for(int i=1;i<=n;i++)
    printf("%d %s\n",a[i].age,a[i].name);
}