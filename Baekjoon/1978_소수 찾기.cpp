#include<stdio.h>
int main(){
int n,prime[10001],a,ans=0;
for(int i = 2; i<=100;i++)
	prime[i]=i;
for(int i = 2; i<=100;i++){
	if(prime[i]==0) continue;
	for(int j = i+i;j<=100;j+=i)
		prime[j]=0;}
scanf("%d",&n);
for(int i=1;i<=n;i++){
	scanf("%d",&a);
	if(prime[a]!=0)
		ans++;}
printf("%d",ans);
return 0 ;
}

