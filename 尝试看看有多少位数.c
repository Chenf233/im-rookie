#include<stdio.h>
int main() {
	int x;
	int n = 0;
	printf("输入整数:");
	scanf_s("%d", &x);
	if (x < 0) { x = -x; }
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("共有%d位数", n);
	return 0;
}
//不能用很大很大的数来试