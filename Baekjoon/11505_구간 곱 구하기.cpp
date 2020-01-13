#include<stdio.h>
#define ll long long
#define mod 1000000007
ll arr[1000001],tree[4000000];
ll Init(int node,int start, int end){
    if(start==end)
    return tree[node]=arr[start];
    int mid=(start+end)/2;
    return tree[node]=((Init(node*2,start,mid)%mod)*(Init(node*2+1,mid+1,end)%mod))%mod;
}
ll Update(int node,int index,int start, int end,ll diff){
    if(index<start||index>end)
    return tree[node];
    int mid=(start+end)/2;
    if(start==end)
    return tree[node]=arr[index];
    return tree[node]=((Update(node*2,index,start,mid,diff)%mod)*(Update(node*2+1,index,mid+1,end,diff)%mod))%mod;
}
ll GetMul(int node,int start,int end,int left,int right){
    if(end<left||start>right)
    return 1;
    if(left<=start&&end<=right)
    return tree[node];
    int mid=(start+end)/2;
    return ((GetMul(node*2,start,mid,left,right)%mod)*(GetMul(node*2+1,mid+1,end,left,right)%mod))%mod;
  return 1;
}
int main(){
    int n,m,k,a,b;
    ll c;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++)
    scanf("%lld",&arr[i]);
    Init(1,1,n);
    for(int i=1;i<=m+k;i++){
        scanf("%d %d %lld",&a,&b,&c);
       if(a==1){
           arr[b]=c;
           Update(1,b,1,n,c);
       }
   else
        printf("%lld\n",GetMul(1,1,n,b,c));
    }
    return 0;
}