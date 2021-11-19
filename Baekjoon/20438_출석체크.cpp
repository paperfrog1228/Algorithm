#include<iostream>
int n,k,q,m,x,sleep[5050],s,e,ans[5050],sum[5050];
int main(){
   scanf("%d %d %d %d",&n,&k,&q,&m);
   for(int i=1;i<=k;i++) scanf("%d",&x),sleep[x]=-1;
   for(int i=1;i<=q;i++){
       scanf("%d",&x);
       if(sleep[x]==-1) continue;
       for(int j=x;j<=n+2;j+=x) {
            if(sleep[j]==-1) continue;
            ans[j]++;
       }
   }
    for(int i=3;i<=n+2;i++){
        sum[i]+=sum[i-1];
        if(ans[i]==0) sum[i]++;
    }
    while(m--)
        scanf("%d %d",&s,&e),printf("%d\n",sum[e]-sum[s-1]);
}