#include<iostream>
int n,a,b,x,y;
int main() {
	scanf("%d",&n);
	while(n--) {
		scanf("%d %d",&x,&y);
		if (x>y)a++;
		if (x<y)b++;
	}
	printf("%d %d",a,b);
}