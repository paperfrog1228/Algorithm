#include<stdio.h>
int main(){
int x,y,n=0;
scanf("%d %d",&x,&y);
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
for(int i = 0;i<x;i++)
	n+=a[i];
n+=y;
n%=7;
if(n==1)
	printf("MON");
if(n==2)
	printf("TUE");
if(n==3)
	printf("WED");
if(n==4)
	printf("THU");
if(n==5)
	printf("FRI");
if(n==6)
	printf("SAT");
if(n==0)
	printf("SUN");
return 0;
}
