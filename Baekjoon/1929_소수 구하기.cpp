#include<stdio.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);
int prime[1000001]={0,1};
for(int i =2; i*i<=m;i++)
	for(int j =2; i*j<=m;j++)
		prime[i*j]=1;
for(int i =n; i<=m;i++)
	if(!prime[i])
	printf("%d\n",i);

return 0;
}
