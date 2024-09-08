#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个连续的整数,并中间带有空格\n");
	scanf_s("%d %d",&a,&b);
	printf("%d %d", a, b);
	return 0;
}