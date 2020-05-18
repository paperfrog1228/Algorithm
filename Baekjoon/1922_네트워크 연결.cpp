#include<stdio.h>
int v,e,ans,set[1004];
struct Edge{int x1;int x2;int w;};
Edge edge[100004],temp[100004];
void Merge(int l,int m,int r){
    int i=l,j=m+1,k=l;
    while(i<=m&&j<=r){
        if(edge[i].w<edge[j].w)
        temp[k++]=edge[i++];
        else
        temp[k++]=edge[j++];
    }
    for(int x=i;x<=m;x++)
        temp[k++]=edge[x];
    for(int x=j;x<=r;x++)
        temp[k++]=edge[x];
    for(int x=l;x<=r;x++)
        edge[x]=temp[x];
}
void MergeSort(int l,int r){
    if(l>=r)
        return;
    int m=(l+r)/2;
    MergeSort(l,m);
    MergeSort(m+1,r);
    Merge(l,m,r);
}
int Find(int x){
   if(set[x]!=x){
       set[x]=Find(set[x]);
   }
   return set[x];
}
void Union(int u,int v){
    int x=Find(u),y=Find(v);
    if(x!=y)
    set[x]=y;
}
bool IsSameSet(int u,int v){
    if(Find(u)==Find(v))
        return false;
    return true;
}
int main(){
    int a,b,c;
    scanf("%d %d",&v,&e);
    for(int i=1;i<=v;i++)
        set[i]=i;
    for(int i=1;i<=e;i++)
    scanf("%d %d %d",&edge[i].x1,&edge[i].x2,&edge[i].w);
    MergeSort(1,e);
    int n=1;
    for(int i=1;i<=e;i++){
        if(IsSameSet(edge[i].x1, edge[i].x2)){
            Union(edge[i].x1, edge[i].x2);
            ans+=edge[i].w;
        }
    }
    printf("%d",ans);
}