#include<stdio.h>
int main() {
	int n,coin[11],k,max;
	long ans=0;
	scanf("%d %d",&n,&k);
	for(int i =1 ;i<=n;i++)
	{scanf("%d",&coin[i]);
	if(coin[i]<=k)
		max=coin[i];
	}
	while(k>0)
	{
		ans+=(k/max);
		k=k%max;
		for(int i =1 ;i<=n;i++)
		if(coin[i]<=k)
		max=coin[i];
	}
	printf("%d",ans);
	return 0;
}