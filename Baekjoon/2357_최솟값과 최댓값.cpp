#include<stdio.h>
#include<algorithm>
#define ll long long
#define INF 1900000000
ll input[100001],max[400001],min[400001];
ll Init(ll tree[],int node,int start,int end){
    if(start==end)
    return tree[node]=input[start];
    int mid=(start+end)/2;
    if(tree==max)
    tree[node]=std::max(Init(tree,node*2,start,mid),Init(tree,node*2+1,mid+1,end));
    else if(tree==min)
    tree[node]=std::min(Init(tree,node*2,start,mid),Init(tree,node*2+1,mid+1,end));
    return tree[node];
}

ll Get(int node,int start,int end,int left,int right,bool isMax){
    if(start>right||end<left){
    if(isMax)
    return -INF;
    else
    return INF;
    }
   
    if(left<=start&&end<=right)
    {
        if(isMax)
            return max[node];
        else
            return min[node];
    }
    int mid=(start+end)/2;
   
    if(isMax)
return std::max( Get(node*2,start,mid,left,right,true)
   , Get(node*2+1,mid+1,end,left,right,true));
    else
    return std::min(Get(node*2,start,mid,left,right,false),
    Get(node*2+1,mid+1,end,left,right,false));
}
int main(){
    int n,m;
    ll a,b;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    scanf("%lld",&input[i]);
    Init(max,1,1,n);
    Init(min,1,1,n);
    for(int i=1;i<=m;i++)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld %lld\n",Get(1,1,n,a,b,false),Get(1,1,n,a,b,true));
    }
}