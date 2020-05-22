#include<stdio.h>
#define INF 2147483647
struct E{int x;int y;int w;};
int n,m,a,b,p[100004],size[1000004],cnt=0;
long long ans=0;
E e[1000004],t[1000004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(e[i].w<e[j].w) t[k++]=e[i++];
    else t[k++]=e[j++];
    for(;i<=m;i++)
    t[k++]=e[i];
    for(;j<=r;j++)
    t[k++]=e[j];
    for(int a=l;a<=r;a++)
    e[a]=t[a];
}
void MergeSort(int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
int Find(int x){
    if(p[x]==x)
    return p[x];
    return p[x]=Find(p[x]);
}
void Union(int x,int y){
    x=Find(x); y=Find(y);
    if(size[x]>size[y]){
        p[y]=x;
        size[x]+=size[y];
    }
    else{
        p[x]=y;
        size[y]+=size[x];
    }
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        p[i]=i;
        size[i]=1;
    }
    for(int i=1;i<=m;i++)
    scanf("%d %d %d",&e[i].x,&e[i].y,&e[i].w);
    MergeSort(1,m);
    for(int i=1;i<=m;i++){
        if(Find(e[i].x)==Find(e[i].y))
            continue;
        Union(e[i].x,e[i].y);
        ans+=e[i].w;
        cnt++;
        if(cnt==n-2)
        break;
    }
    printf("%lld",ans);
}