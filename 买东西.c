#include<stdio.h>
int main()
{
	int bill;
	int money;
	printf("����Ӧ����");
	scanf_s("%d", &bill);
	printf("����֧����");
	scanf_s("%d", &money);
	if (money >= bill) {
		printf("Ӧ����:%d", money - bill);
	}
	else {
		printf("����Ǯ����");
	}
	return 0;
}
//Ŀǰû����ѭ���������ټ�