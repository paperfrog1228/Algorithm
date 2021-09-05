#include<stdio.h>
#include<algorithm>
int n,a[20],op[5];
long long mx=-1000000000000,mn=10000000000;
void dfs(int i,long long cur){
    if(i==n){
        mx=std::max(cur,mx);
        mn=std::min(cur,mn);
        return;
    }
    if(op[1]>0) op[1]--,dfs(i+1,cur+a[i+1]),op[1]++;
    if(op[2]>0) op[2]--,dfs(i+1,cur-a[i+1]),op[2]++;
    if(op[3]>0) op[3]--,dfs(i+1,cur*a[i+1]),op[3]++;
    if(op[4]>0) op[4]--,dfs(i+1,cur/a[i+1]),op[4]++;
} 
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=4;i++) scanf("%d",&op[i]);
    dfs(1,a[1]);
    printf("%lld\n%lld",mx,mn);
}