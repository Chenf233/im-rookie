#include<stdio.h>
int main()
{
	int bill;
	int money;
	printf("输入应付金额：");
	scanf_s("%d", &bill);
	printf("输入支付金额：");
	scanf_s("%d", &money);
	if (money >= bill) {
		printf("应找您:%d", money - bill);
	}
	else {
		printf("您的钱不够");
	}
	return 0;
}
//目前没看到循环，看到再加