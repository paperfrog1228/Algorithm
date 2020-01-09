#include<stdio.h>
long long a[1000001],tree[3000001];
long long Init(int node,int start,int end){
  if(start==end)
  return tree[node]=a[start];
  int mid=(start+end)/2;
  return tree[node]=Init(node*2,start,mid)+Init(node*2+1,mid+1,end);
}
void Update(int node,int index,int left,int right,long long diff){
  if(left<=index&&index<=right)
  tree[node]+=diff;
  else return;
  if(left==right)
  return;
  int mid=(left+right)/2;
  Update(node*2,index,left,mid,diff);
  Update(node*2+1,index,mid+1,right,diff);
}
long long GetSum(int node,int left,int right,int start,int end){
if(left<=start&&end<=right)
return tree[node];
if(right<start||end<left)
return 0;
int mid=(start+end)/2;
return GetSum(node*2,left,right,start,mid)+GetSum(node*2+1,left,right,mid+1,end);
}
int main(){
  int n,m,k,x;
  long long y,z;
  scanf("%d %d %d",&n,&m,&k);
  for(int i =1;i<=n;i++)
    scanf("%lld",&a[i]);
  Init(1,1,n);
  for(int i=1;i<=m+k;i++)
  {
    scanf("%d %lld %lld",&x,&y,&z);
    if(x==1)
   {Update(1,y,1,n,z-a[y]);
   a[y]=z;
   }
    if(x==2)
   printf("%lld\n",GetSum(1,y,z,1,n));
  }
} 