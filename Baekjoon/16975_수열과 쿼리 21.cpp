#include<stdio.h>
#define FOR(i,s,n) for(int i=s;i<=n;i++) 
int q,a,b,c,n,m;
int arr[100000];
long long tree[400000],lazy[400000];
void Init(int node,int start,int end){
    if(start==end){
        tree[node]=arr[start];
        return;
    }
    int mid=(start+end)/2;
    Init(node*2,start,mid),Init(node*2+1,mid+1,end);
}
void propagate(int node, int start, int end){
    if(lazy[node]!=0){
        tree[node] += lazy[node];
        if(start!=end){
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}
void Update(int node,int start,int end,int left,int right,int diff){
    propagate(node,start,end);
    if(right<start||end<left)
    return;
    if(left<=start&&end<=right){
        tree[node]+=diff;
        if(start!=end){
        lazy[node*2]+=diff;
        lazy[node*2+1]+=diff;
        }
        return;
    }
    int mid=(start+end)/2;
    Update(node*2,start,mid,left,right,diff),Update(node*2+1,mid+1,end,left,right,diff);
}
long long Get(int node,int index,int start,int end){
    propagate(node,start,end);
    if(start>index||index>end)
    return 0;
    if(start==index&&end==index)
    return tree[node];
    
    int mid=(start+end)/2;
    return Get(node*2,index,start,mid)+Get(node*2+1,index,mid+1,end);
}
int main(){
    scanf("%d",&n);
    FOR(i,1,n) scanf("%d",&arr[i]);
    Init(1, 1, n);
    scanf("%d",&m);
    FOR(i, 1, m){ 
        scanf("%d",&q);
        if(q==1){
            scanf("%d %d %d",&a,&b,&c);
            Update(1,1,n,a,b,c);
        }
        else{
            scanf("%d",&a);
            printf("%lld\n",Get(1,a,1,n));
        }
    }
    return 0;
}