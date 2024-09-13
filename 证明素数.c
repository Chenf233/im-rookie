#include<stdio.h>
#include<math.h>
int main() {
	double kai;
	int flag = 1,n,i;
	printf("输入想查询的整数:");
	scanf_s("%d", &n);
	kai = sqrt(n);
	for (i = n-1; i >= kai; i--) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) { printf("%d是素数", n);}
	else { printf("%d不是素数", n);}
	return 0;
}