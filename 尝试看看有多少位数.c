#include<stdio.h>
int main() {
	int x;
	int n = 0;
	printf("��������:");
	scanf_s("%d", &x);
	if (x < 0) { x = -x; }
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("����%dλ��", n);
	return 0;
}
//�����úܴ�ܴ��������