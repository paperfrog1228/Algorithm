#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i =1;i<=n;i++){
	for(int j=i;j>0;j--)
	printf("*");
	printf("\n");
}
return 0;
}
