#include<stdio.h>
int main() {
	int a,i,j,k,flag=1;
	scanf_s("%d", &a);
	for (i = a; i <= a+3; i++) {
		for (j = a; j <= a + 3;j++) {
			for (k = a; k <= a + 3; k++) {
				if (i != j && j != k && i != k) { 
					printf("%d%d%d", i, j, k);
					if (flag % 6 == 0) {
						printf("\n");
					}
					else{
						printf(" ");
					}
					flag++;
				}
			}
		}
	}
	return 0;
}