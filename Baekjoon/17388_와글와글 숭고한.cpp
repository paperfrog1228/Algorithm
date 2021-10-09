#include<stdio.h>
int a,b,c;
int main() {
	scanf("%d %d %d",&a,&b,&c);
	if(a+b+c>99){
		printf("OK");
		return 0;
	}
	if(a<b&&a<c)
		printf("Soongsil");
	else if(b<a&&b<c)
		printf("Korea");
	else
		printf("Hanyang");
}