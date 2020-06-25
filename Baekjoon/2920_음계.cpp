#include <stdio.h>
int  t;
bool a = true, d = true;
int main() {
	for (int i = 1; i <= 8; i++) {
		scanf("%d", &t);
		if (t != i)
			a = false;
		if (t != 9 - i)
			d = false;
	}
	if (a)
		printf("ascending");
	else if (d)
		printf("descending");
	else
		printf("mixed");
}