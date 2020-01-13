#include<stdio.h>
#define ll long long
ll arr[100001],tree[400000];
ll Init(int node,int start,int end){
    if(start==end)
    return tree[node]=arr[start];
    int mid=(start+end)/2;
    return tree[node]=Init(node*2,start,mid)+Init(node*2+1,mid+1,end);
}
void Update(int node,int index,int start,int end,ll diff){
    if(index<start||index>end)
    return;
    if(start==end)
    {
        tree[node]+=diff;
        return;
    }
    tree[node]+=diff;
    int mid=(start+end)/2;
    Update(node*2,index,start,mid,diff);
    Update(node*2+1,index,mid+1,end,diff);
}
ll GetSum(int node,int left,int right,int start,int end){
    if(end<left||start>right)
    return 0;
    if(left<=start&&end<=right)
    return tree[node];
    int mid=(start+end)/2;
    return GetSum(node*2,left,right,start,mid)+GetSum(node*2+1,left,right,mid+1,end);
}
int main(){
int n,q,x,y,a;
ll b;
scanf("%d %d",&n,&q);
for(int i =1;i<=n;i++)
scanf("%lld",&arr[i]);
Init(1, 1, n);
for(int i =1;i<=q;i++)
{
    scanf("%d %d %d %lld",&x,&y,&a,&b);
    if(x>y)
    {
        ll temp=x;
        x=y;
        y=temp;
    }
    printf("%lld\n",GetSum(1,x,y,1,n));
    Update(1,a,1,n,b-arr[a]);
    arr[a]=b;
}
}