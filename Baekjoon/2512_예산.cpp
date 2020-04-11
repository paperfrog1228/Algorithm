#include<stdio.h>
int n,m,arr[10005],ans;
bool Check(int money){
    int sum=0,max=0;
    for(int i=1;i<=n;i++){
        int req=arr[i];
        if(arr[i]>money)
            req=money;
        sum+=req;
        if(max<req)
        max=req;
    }
    if(sum>m)
        return false;
    if(ans<max)
    ans=max;
    return true;
}
void Search(int left,int right){
    if(left>right)
    return;
    int mid=(left+right)/2;
    if(Check(mid))
    Search(mid+1,right);
    else
    Search(left,mid-1);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&m);
    Search(0,m);
    printf("%d",ans);
}