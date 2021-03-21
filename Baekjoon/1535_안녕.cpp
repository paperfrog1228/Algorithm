#include<iostream>
int n,l[30],j[30],ans;
void dfs(int i,int hp,int happy){
    if(hp<=0) return;
    if(happy>ans) ans=happy;
    for(int k=i+1;k<=n;k++)
    dfs(k,hp-l[k],happy+j[k]);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&l[i]);
    for(int i=1;i<=n;i++) scanf("%d",&j[i]);
    for(int i=1;i<=n;i++) dfs(i,100-l[i],j[i]);
    printf("%d",ans);
}