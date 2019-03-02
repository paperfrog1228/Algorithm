#include<stdio.h>
int main(){
int n,k[101];
scanf("%d",&n);
for(int i =1;i<=n;i++)
	scanf("%d",&k[i]);
for(int j =1;j<=n;j++){
for(int i =1;i<=k[j];i++)
printf("=");
printf("\n");
}
return 0;
}

