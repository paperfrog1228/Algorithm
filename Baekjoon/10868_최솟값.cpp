#include<iostream>
int n,m,arr[100004],tree[400000],a,b;
int init(int node,int start,int end){
  if(start==end)return tree[node]=arr[start];
  int mid=(start+end)/2;
  int a=init(node*2,start,mid),b=init(node*2+1,mid+1,end);
  a<b?tree[node]=a:tree[node]=b;
  return tree[node];
}
int get_min(int node,int l,int r,int s,int e){
    if(l<=s&&e<=r) return tree[node];
    if(r<s||e<l) return 1000000001;
    int mid=(s+e)/2;
    int a=get_min(node*2,l,r,s,mid),b=get_min(node*2+1,l,r,mid+1,e),c;
    a<b?c=a:c=b;
    return c;
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    init(1,1,n);
    while(m>0){
        scanf("%d %d",&a,&b);
        printf("%d\n",get_min(1,a,b,1,n));
        m--;
    }
}