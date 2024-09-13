#include<stdio.h>
int main() {
	printf("ÊäÈëÕûÊý:");
	int n,i=1,t,output;
	scanf_s("%d", &n);
	for (t = n; t > 9; t /= 10) {
		i*=10;
	}
	while (i > 0) {
		output = n / i;
		printf("%d", output);
		n %= i;
		i /= 10;
		if (i > 0) {
			printf(" ");
		}
	}
	return 0;
}