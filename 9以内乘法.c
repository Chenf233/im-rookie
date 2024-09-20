#include<stdio.h>
int main() {
	int n,a,b;
	scanf_s("%d", &n);
	for (a=1; a <= n; a++) {
		for (b = 1; b <= a; b++) {
			printf("%d*%d=%d", b, a, b * a);
			if (a * b >= 10) { printf("  "); }
			else { printf("   "); }
		}
		printf("\n");
	}
	return 0;
}