#include<stdio.h>
struct edge{int x;int y;int w;};
edge e[200004],t[200004];
int n,m,p[200004],size[200004];
int Find(int x){
    if(x==p[x])
    return x;
    return p[x]=Find(p[x]);
}
void Union(int x,int y){
    int a=Find(x),b=Find(y);
    if(a==b)
    return;
    if(size[a]<size[b]){
        p[a]=b;
        size[b]+=size[a];
    }
    else{
        p[b]=a;    
        size[a]+=size[b];    
    }
}
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r)
    if(e[i].w<=e[j].w)
        t[k++]=e[i++];
    else
        t[k++]=e[j++];
    for(;i<=m;i++)
        t[k++]=e[i];
    for(;j<=r;j++)
        t[k++]=e[j];
    for(int x=l;x<=r;x++)
        e[x]=t[x];
}
void MergeSort(int l,int r){
    if(l>=r)
    return;
    int m=(l+r)/2;
    MergeSort(l, m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
bool Solve(){
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)
    return false;
    int ans=0,cnt=0,sum=0;
    for(int i=1;i<=m;i++){
        scanf("%d %d %d",&e[i].x,&e[i].y,&e[i].w);
        sum+=e[i].w;
    }
    for(int i=0;i<n;i++){
        p[i]=i;
        size[i]=1;
    }
    MergeSort(1,m);
    for(int i=1;i<=m;i++){
        if(Find(e[i].x)==Find(e[i].y))
            continue;
        Union(e[i].x, e[i].y);
        ans+=e[i].w;
        cnt++;
        if(cnt==n-1)
        break;
    }
    printf("%d\n",sum-ans);
    return true;
}
int main(){
    while(Solve());
}