#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	x = x / 100 + x % 100 / 10 * 10 + x % 10 * 100;
	printf("%d", x);
	return 0;
}
//输出结果，123变为321
