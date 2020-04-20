#include<stdio.h>
struct point{int x;int y;};
point p[100005],tmp[100005];
bool operator<=(point a,point b){
    if(a.x<b.x) return true;
    if(a.x>b.x) return false;
    if(a.y<b.y) return true;
    return false; 
}
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(p[i]<=p[j])
    tmp[k++]=p[i++];
    else
    tmp[k++]=p[j++];
    while(i<=m)
    tmp[k++]=p[i++];
    while(j<=r)
    tmp[k++]=p[j++];
    for(int a=l;a<=r;a++)
    p[a]=tmp[a];
}
void MergeSort(int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d %d",&p[i].x,&p[i].y);
    MergeSort(1,n);
    for(int i=1;i<=n;i++)
    printf("%d %d\n",p[i].x,p[i].y);
}