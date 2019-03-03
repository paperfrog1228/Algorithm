#include<stdio.h>
int main(){
int n,q,l,i,ans=0,d[10002]={0,};
scanf("%d %d",&n,&q);
for(int j=1;j<=q;j++){
scanf("%d %d",&l,&i);
for(int k=0;l+k*i<=n;k++)
d[l+k*i]=1;
}
for(int j=1;j<=n;j++)
	if(d[j]==0) ans++;

printf("%d\n",ans);
return 0;
}
