#include<stdio.h>
#include<math.h>
int main() {
	double kai;
	int flag = 1,n,i;
	printf("�������ѯ������:");
	scanf_s("%d", &n);
	kai = sqrt(n);
	for (i = n-1; i >= kai; i--) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) { printf("%d������", n);}
	else { printf("%d��������", n);}
	return 0;
}