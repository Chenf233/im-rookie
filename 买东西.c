#include<stdio.h>
int main()
{
	int bill;
	int money;
	printf("输入应付金额：");
	scanf_s("%d", &bill);
	printf("输入支付金额：");
	scanf_s("%d", &money);
	while (1) {
		if (money >= bill) {
			printf("应找您:%d", money - bill);
			break;
		}
		else {
			printf("您的钱不够,请重新支付\n");
			printf("输入支付金额：");
			scanf_s("%d", &money);
	}
	
	}
	return 0;
}