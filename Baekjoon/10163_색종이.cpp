#include <stdio.h>
int n,a,b,ii=1,w,h,p[105][105],c;
int main() {
	scanf("%d", &n);
	while (ii<=n) {
		scanf("%d %d %d %d", &a, &b, &w, &h);
		for (int i = a; i < a + w; i++)
			for (int j = b; j < b + h; j++)
				p[i][j]=ii;
		ii++;
	}
    for(int k=1;k<=n;k++){
        c=0;
	for (int i = 0; i <= 104; i++)
		for (int j = 0; j <= 104; j++)
			if (p[i][j]==k) c++;
	    printf("%d\n",c);
    }
}