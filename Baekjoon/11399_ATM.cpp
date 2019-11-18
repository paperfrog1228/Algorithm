#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int k=0, n, a[1000];
	int i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	for(i=n;i>0;i--){
		k += a[n-i]*i;
	}
	printf("%d", k);
}