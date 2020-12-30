#include<stdio.h>
int k,d,a;
char t;
int main(){	scanf("%d%c%d%c%d",&k,&t,&d,&t,&a);
	if(k+a<d||d==0)
	printf("hasu");
	else printf("gosu");
    return 0;
}
