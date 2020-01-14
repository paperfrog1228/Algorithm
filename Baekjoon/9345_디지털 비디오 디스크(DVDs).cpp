#include<stdio.h>
#include<algorithm>
#define INF 1000000
using namespace std;
int arr[100001],maxTree[400000],minTree[400000],maxAns,minAns;
void Init(int node,int start,int end){
    if(start==end){
        maxTree[node]=minTree[node]=arr[start];
        return;}
    int mid=(start+end)/2;
    Init(node*2,start,mid);
    Init(node*2+1,mid+1,end);
    maxTree[node]=max(maxTree[node*2],maxTree[node*2+1]);
    minTree[node]=min(minTree[node*2],minTree[node*2+1]);
}
int Update(int node, int index, int start,int end,bool isMax){
    if(end<index||index<start){
        if(isMax)
        return maxTree[node];
        else return minTree[node];}
    if(start==end)
        return maxTree[node]=minTree[node]=arr[index];
    int mid=(start+end)/2;
    if(isMax)
    return maxTree[node]=max(Update(node*2,index,start,mid,true),Update(node*2+1,index,mid+1,end,true));
    else 
    return minTree[node]=min(Update(node*2,index,start,mid,false),Update(node*2+1,index,mid+1,end,false));
}
int Get(int node,int start,int end,int left, int right,bool isMax){
    if(end<left||start>right){
        if(isMax)
        return -INF;
        else return INF;
    }
    if(left<=start&&end<=right){
     if(isMax)
     return maxTree[node];
     else return minTree[node];
    }
    int mid=(start+end)/2;
    if(isMax)
    return max(Get(node*2,start,mid,left,right,true),Get(node*2+1,mid+1,end,left,right,true));
    else 
    return min(Get(node*2,start,mid,left,right,false),Get(node*2+1,mid+1,end,left,right,false));
}
void Test(){
    int k,q,a,b,n;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++)
    arr[i]=i;
    Init(1, 1, n);
    for(int i=1;i<=k;i++){
    scanf("%d %d %d",&q,&a,&b);
    if(q==0){
        int temp=arr[b+1];
        arr[b+1]=arr[a+1];
        arr[a+1]=temp;
        Update(1,a+1,1,n,true);
        Update(1,a+1,1,n,false);
        Update(1,b+1,1,n,true);
        Update(1,b+1,1,n,false);
    }
    else{
        maxAns=Get(1,1,n,a+1,b+1,true);
        minAns=Get(1,1,n,a+1,b+1,false);
        if(maxAns==b+1&&minAns==a+1)
        printf("YES\n");
        else printf("NO\n");
    }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    Test();
    return 0;
}