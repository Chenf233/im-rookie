#include<stdio.h>
int main()
{
	int bill;
	int money;
	printf("����Ӧ����");
	scanf_s("%d", &bill);
	printf("����֧����");
	scanf_s("%d", &money);
	while (1) {
		if (money >= bill) {
			printf("Ӧ����:%d", money - bill);
			break;
		}
		else {
			printf("����Ǯ����,������֧��\n");
			printf("����֧����");
			scanf_s("%d", &money);
	}
	
	}
	return 0;
}