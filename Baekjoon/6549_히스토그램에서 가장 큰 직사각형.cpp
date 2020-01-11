#include<stdio.h>
#include<algorithm>
#define ll long long
ll h[100001],tree[400000];
 int n=1;
void Init(int node,int start,int end){
    if(start==end)
     tree[node]=start;
    else{
    int mid=(start+end)/2;
    Init(node*2,start,mid);
    Init(node*2+1,mid+1,end);
    h[tree[node*2]]<h[tree[node*2+1]]?tree[node]=tree[node*2]:tree[node]=tree[node*2+1];
    }
}
int GetMinHigh(int node,int start,int end,int left,int right){
    if(end<left||start>right)
    return -1;
    if(left<=start&&end<=right)
    return tree[node];
    int mid=(start+end)/2;
    int leftIndex=GetMinHigh(node*2,start,mid,left,right);
    int rightIndex=GetMinHigh(node*2+1,mid+1,end,left,right);
    if(leftIndex==-1)
    return rightIndex;
    if(rightIndex==-1)
    return leftIndex;
   
    return h[leftIndex]<h[rightIndex]?leftIndex:rightIndex; 
}

ll GetMax(int left,int right){
 ll maxW=0,tmpW=0;
 int index=GetMinHigh(1,1,n,left,right);
 maxW=(right-left+1)*h[index];
 if(left<index){
    tmpW=GetMax(left,index-1);
    maxW=std::max(maxW,tmpW);
 }
 if(index<right){
  tmpW=GetMax(index+1,right);
  maxW=std::max(maxW,tmpW);
 }
 return maxW;
}
int main(){
    while(1){
          scanf("%d",&n);
          if(n==0)
          return 0;
    for(int i=1;i<=n;i++)
    scanf("%lld",&h[i]);
    Init(1,1,n); 
    printf("%lld\n",GetMax(1,n));
    }  
}