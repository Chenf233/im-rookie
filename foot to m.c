#include<stdio.h>
int main()
{
	double foot;
	double inch;
	printf("请输入要转换的尺码，如/6 7/代表6尺7寸");
	scanf_s("%lf %lf", &foot, &inch);
	printf("%lf尺 %lf寸是%lf m",foot, inch,(foot+inch/12)*0.3048);
	return 0;
}