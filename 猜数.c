#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(0));
	int a = rand();
	int g;
	int t=0;
	a %= 100;
	do {
		printf("��0��99֮�����:");
		scanf_s("%d", &g);
		t++;
		if (g > a) { printf("�µ����ϴ�\n"); }
		else if (g < a) { printf("��µ�����С\n"); }
	} while (g != a);
	printf("������%d�β³�����", t);
	return 0;
}