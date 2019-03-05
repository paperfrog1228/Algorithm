#include<stdio.h>
#include<limits.h>
int n,a[12],pl,mi,mu,di;
long long max=-INT_MAX,min=INT_MAX;
void calc(int i,long long temp,int pl2,int mi2,int mu2,int di2){
	if(i==n){
	if(max<=temp) max=temp;
	if(min>=temp) min=temp;
	return ;}
if(pl>pl2) 
	calc(i+1,temp+a[i+1],pl2+1,mi2,mu2,di2);
if(mi>mi2) 
	calc(i+1,temp-a[i+1],pl2,mi2+1,mu2,di2);
if(mu>mu2) 
	calc(i+1,temp*a[i+1],pl2,mi2,mu2+1,di2);
if(di>di2) 
	calc(i+1,temp/a[i+1],pl2,mi2,mu2,di2+1);

}
int main(){
	scanf("%d",&n);

	for(int i =1;i<=n;i++)
	scanf("%d",&a[i]);

	scanf("%d %d %d %d",&pl,&mi,&mu,&di);

	calc(1,a[1],0,0,0,0);
	printf("%lld\n",max);
	printf("%lld\n",min);
	return 0;
}
