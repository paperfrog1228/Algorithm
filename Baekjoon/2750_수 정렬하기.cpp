#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[1001];
for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(a[j]<a[i])
	{int temp=a[j];
	a[j]=a[i];
	a[i]=temp;}
for(int i=1;i<=n;i++)
	printf("%d\n",a[i]);
return 0;
}
